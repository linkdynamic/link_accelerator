const char loginHtml[] PROGMEM = R"(<!DOCTYPE html>
<html>

<head>
    <title>Link Accelerometer Login</title>
    <script src="https://code.jquery.com/jquery-3.2.1.min.js" integrity="sha256-hwg4gsxgFZhOsEEamdOYGBf13FyQuiTwlAQgxVSNgt4=" crossorigin="anonymous"></script>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
    <style type='text/css'>
        .container {
            margin-top: 20px;
        }
        
        .page_header {
            position: absolute;
            top: 25px;
            width: 360px;
            height: 25px;
            color: rgb(108, 112, 115);
            text-align: left;
            left: 15px;
            font-size: 24px;
            font-weight: 600;
        }
        
        .header_div {
            position: absolute;
            top: 0px;
            left: 0px;
            width: 100%;
            height: 72px;
            background-color: black;
        }
        
        .content_div {
            position: absolute;
            top: 90px;
            left: 15px;
            width: 100%;
            height: auto;
        }

    </style>
    <script>
        function getMessage(type, message) {
            var str = "<div class='alert alert-" + type + " alert-dismissable'><a href='#' class='close' data-dismiss='alert' aria-label='close'>×</a>" + "<strong>" + type.toUpperCase() + "!</strong>&nbsp;&nbsp;" + message + "</div>";
            return str;
        }
        $(document).ready(function() {
            $("#login_btn").click(function(event){
               event.preventDefault();
               $.post( "/login", $( "#login_form" ).serialize(), function( data ) {
                   if (data.data == "t") {
                       $( "#login_form" ).submit();
                   } else {
                       $("#msg").html(getMessage("error","Login Failed"));
                   }
               });
            });
        });
    </script>
</head>
<body>
    <div class='header_div'>
        <div class='page_header'>Link Accelerometer</div>
    </div>
    <div class="content_div">
        <div id='msg' class='msg'></div>
        <div class="container">
            <div class="row vertical-offset-100">
                <div class="col-md-4 col-md-offset-4">
                    <div class="panel panel-default">
                        <div class="panel-heading">
                            <h3 class="panel-title">Please sign in</h3>
                        </div>
                        <div class="panel-body">
                            <form id="login_form" action="#" method="post">
                                <fieldset>
                                    <div class="form-group">
                                        <input class="form-control" placeholder="Account" name="uid" type="text">
                                    </div>
                                    <div class="form-group">
                                        <input class="form-control" placeholder="Password" name="pwd" type="password" value="">
                                    </div>
                                    <input id="login_btn" class="btn btn-lg btn-success btn-block" type="button" value="Login">
                                </fieldset>
                            </form>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
</body>

)";

<%@ Page Language="C#" Inherits="WebForm.Default" %>
<!DOCTYPE html>
<html>
<head runat="server">
	<title>Default</title>
</head>
<body>  
    <form id="form1" runat="server">  
        <div>  
            <table>  
                <tr>  
                    <td> Username: </td>  
                    <td>  
                        <asp:TextBox ID="txtUserName" runat="server" />  
                        <asp:RequiredFieldValidator ID="rfvUser" ErrorMessage="Please enter Username" ControlToValidate="txtUserName" runat="server" /> </td>  
                </tr>  
                <tr>  
                    <td> Password: </td>  
                    <td>  
                        <asp:TextBox ID="txtPWD" runat="server" TextMode="Password" />  
                        <asp:RequiredFieldValidator ID="rfvPWD" runat="server" ControlToValidate="txtPWD" ErrorMessage="Please enter Password" /> </td>  
                </tr>  
                <tr>  
                    <td> </td>  
                    <td>  
                        <asp:Button ID="btnSubmit" runat="server" Text="Submit" /> </td>  
                </tr>  
            </table>  
        </div>  
    </form>  
</body>  

</html>

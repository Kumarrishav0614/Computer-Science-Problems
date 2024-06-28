import 'package:flutter/material.dart';
import 'package:tiktok/constants.dart';
import 'package:tiktok/views/widgets/text_input_field.dart';

class LoginScreen extends StatelessWidget {
  LoginScreen({ super.key });

  final TextEditingController _emailController = TextEditingController();
  final TextEditingController _passwordController = TextEditingController();

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        body: Container(
          alignment: Alignment.center,
          child: Column(
            children: [
              Text('Tik Tok', style: TextStyle(fontSize: 35, color: buttonColor, fontWeight: FontWeight.w900),),
              const Text('Login', style: TextStyle(fontSize: 35, fontWeight: FontWeight.w700),),
              const SizedBox(height: 25,),
              Container(
                width: MediaQuery.of(context).size.width,
                margin: const EdgeInsets.symmetric(horizontal: 20),
                child: TextInputField(
                  icon: Icons.email,
                  labelText: 'Email',
                  controller: _emailController,
                ),
              ),
              const SizedBox(height: 25,),
              Container(
                width: MediaQuery.of(context).size.width,
                margin: const EdgeInsets.symmetric(horizontal: 20),
                child: TextInputField(
                  isObscure: true,
                  icon: Icons.lock,
                  labelText: 'Password',
                  controller: _passwordController,
                ),
              ),
              const SizedBox(height: 30,),
              Container(
                height: 50,
                width: MediaQuery.of(context).size.width,
                decoration: BoxDecoration(
                  color: buttonColor,
                  borderRadius: const BorderRadius.all(Radius.circular(5)),
                ),
                child: InkWell(
                    onTap: () {

                    },
                    child: const Center(
                        child: Text('Login',
                          style: TextStyle(
                            fontSize: 20,
                            fontWeight: FontWeight.w700,
                          ),
                        )
                    )
                ),
              ),
              const SizedBox(height: 15,)
              
            ],
          ),
        )
    );
  }
}
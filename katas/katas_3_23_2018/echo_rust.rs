use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();
    let mut echo = String::new();
    for arg in &args[1..] {
        echo.push_str(&arg);
        echo.push(' ');
    }
    println!("{}", echo);
}

        


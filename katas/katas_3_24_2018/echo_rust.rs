use std::env;
fn main() {
    let args: Vec<String> = env::args().collect();
    let echo = args[1..].join(" ");
    println!("{}", echo);
}


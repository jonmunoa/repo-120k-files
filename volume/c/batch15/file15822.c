// fichero 15822 -- macros y constantes
#define LIMITE_15822 15922
#define FACTOR_15822 3

int aplicar_limite15822(int valor) {
    if (valor > LIMITE_15822) return LIMITE_15822;
    return valor * FACTOR_15822;
}

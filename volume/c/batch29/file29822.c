// fichero 29822 -- macros y constantes
#define LIMITE_29822 29922
#define FACTOR_29822 3

int aplicar_limite29822(int valor) {
    if (valor > LIMITE_29822) return LIMITE_29822;
    return valor * FACTOR_29822;
}

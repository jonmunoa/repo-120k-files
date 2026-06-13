// fichero 51822 -- macros y constantes
#define LIMITE_51822 51922
#define FACTOR_51822 3

int aplicar_limite51822(int valor) {
    if (valor > LIMITE_51822) return LIMITE_51822;
    return valor * FACTOR_51822;
}

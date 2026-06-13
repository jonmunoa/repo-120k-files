// fichero 41822 -- macros y constantes
#define LIMITE_41822 41922
#define FACTOR_41822 3

int aplicar_limite41822(int valor) {
    if (valor > LIMITE_41822) return LIMITE_41822;
    return valor * FACTOR_41822;
}

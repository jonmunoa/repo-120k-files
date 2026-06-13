// fichero 52822 -- macros y constantes
#define LIMITE_52822 52922
#define FACTOR_52822 3

int aplicar_limite52822(int valor) {
    if (valor > LIMITE_52822) return LIMITE_52822;
    return valor * FACTOR_52822;
}

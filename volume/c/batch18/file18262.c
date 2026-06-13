// fichero 18262 -- macros y constantes
#define LIMITE_18262 18362
#define FACTOR_18262 3

int aplicar_limite18262(int valor) {
    if (valor > LIMITE_18262) return LIMITE_18262;
    return valor * FACTOR_18262;
}

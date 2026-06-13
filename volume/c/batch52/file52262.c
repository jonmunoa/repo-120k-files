// fichero 52262 -- macros y constantes
#define LIMITE_52262 52362
#define FACTOR_52262 3

int aplicar_limite52262(int valor) {
    if (valor > LIMITE_52262) return LIMITE_52262;
    return valor * FACTOR_52262;
}

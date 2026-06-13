// fichero 40262 -- macros y constantes
#define LIMITE_40262 40362
#define FACTOR_40262 3

int aplicar_limite40262(int valor) {
    if (valor > LIMITE_40262) return LIMITE_40262;
    return valor * FACTOR_40262;
}

// fichero 48218 -- macros y constantes
#define LIMITE_48218 48318
#define FACTOR_48218 4

int aplicar_limite48218(int valor) {
    if (valor > LIMITE_48218) return LIMITE_48218;
    return valor * FACTOR_48218;
}

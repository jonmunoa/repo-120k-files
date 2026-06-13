// fichero 16222 -- macros y constantes
#define LIMITE_16222 16322
#define FACTOR_16222 3

int aplicar_limite16222(int valor) {
    if (valor > LIMITE_16222) return LIMITE_16222;
    return valor * FACTOR_16222;
}

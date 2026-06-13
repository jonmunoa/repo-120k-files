// fichero 39126 -- macros y constantes
#define LIMITE_39126 39226
#define FACTOR_39126 2

int aplicar_limite39126(int valor) {
    if (valor > LIMITE_39126) return LIMITE_39126;
    return valor * FACTOR_39126;
}

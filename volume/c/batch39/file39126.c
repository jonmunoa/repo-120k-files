// fichero 39126 -- macros y constantes -- MODIFICADO
#define LIMITE_39126 39326
#define FACTOR_39126 3

int aplicar_limite39126(int valor) {
    if (valor > LIMITE_39126) return LIMITE_39126;
    return valor * FACTOR_39126;
}

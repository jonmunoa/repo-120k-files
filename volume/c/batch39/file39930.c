// fichero 39930 -- macros y constantes
#define LIMITE_39930 40030
#define FACTOR_39930 1

int aplicar_limite39930(int valor) {
    if (valor > LIMITE_39930) return LIMITE_39930;
    return valor * FACTOR_39930;
}

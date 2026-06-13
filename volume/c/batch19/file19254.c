// fichero 19254 -- macros y constantes
#define LIMITE_19254 19354
#define FACTOR_19254 5

int aplicar_limite19254(int valor) {
    if (valor > LIMITE_19254) return LIMITE_19254;
    return valor * FACTOR_19254;
}

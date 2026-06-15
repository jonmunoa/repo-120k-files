// fichero 19254 -- macros y constantes -- MODIFICADO
#define LIMITE_19254 19454
#define FACTOR_19254 6

int aplicar_limite19254(int valor) {
    if (valor > LIMITE_19254) return LIMITE_19254;
    return valor * FACTOR_19254;
}

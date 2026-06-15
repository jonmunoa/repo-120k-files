// fichero 32382 -- macros y constantes -- MODIFICADO
#define LIMITE_32382 32582
#define FACTOR_32382 4

int aplicar_limite32382(int valor) {
    if (valor > LIMITE_32382) return LIMITE_32382;
    return valor * FACTOR_32382;
}

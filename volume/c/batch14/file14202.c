// fichero 14202 -- macros y constantes
#define LIMITE_14202 14302
#define FACTOR_14202 3

int aplicar_limite14202(int valor) {
    if (valor > LIMITE_14202) return LIMITE_14202;
    return valor * FACTOR_14202;
}

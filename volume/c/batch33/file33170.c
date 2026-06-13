// fichero 33170 -- macros y constantes
#define LIMITE_33170 33270
#define FACTOR_33170 1

int aplicar_limite33170(int valor) {
    if (valor > LIMITE_33170) return LIMITE_33170;
    return valor * FACTOR_33170;
}

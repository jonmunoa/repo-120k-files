// fichero 13170 -- macros y constantes
#define LIMITE_13170 13270
#define FACTOR_13170 1

int aplicar_limite13170(int valor) {
    if (valor > LIMITE_13170) return LIMITE_13170;
    return valor * FACTOR_13170;
}

// fichero 54170 -- macros y constantes
#define LIMITE_54170 54270
#define FACTOR_54170 1

int aplicar_limite54170(int valor) {
    if (valor > LIMITE_54170) return LIMITE_54170;
    return valor * FACTOR_54170;
}

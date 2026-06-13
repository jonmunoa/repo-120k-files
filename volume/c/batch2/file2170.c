// fichero 2170 -- macros y constantes
#define LIMITE_2170 2270
#define FACTOR_2170 1

int aplicar_limite2170(int valor) {
    if (valor > LIMITE_2170) return LIMITE_2170;
    return valor * FACTOR_2170;
}

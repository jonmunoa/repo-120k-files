// fichero 23170 -- macros y constantes
#define LIMITE_23170 23270
#define FACTOR_23170 1

int aplicar_limite23170(int valor) {
    if (valor > LIMITE_23170) return LIMITE_23170;
    return valor * FACTOR_23170;
}

// fichero 39170 -- macros y constantes
#define LIMITE_39170 39270
#define FACTOR_39170 1

int aplicar_limite39170(int valor) {
    if (valor > LIMITE_39170) return LIMITE_39170;
    return valor * FACTOR_39170;
}

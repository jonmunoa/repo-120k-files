// fichero 19170 -- macros y constantes
#define LIMITE_19170 19270
#define FACTOR_19170 1

int aplicar_limite19170(int valor) {
    if (valor > LIMITE_19170) return LIMITE_19170;
    return valor * FACTOR_19170;
}

// fichero 19170 -- macros y constantes -- MODIFICADO
#define LIMITE_19170 19370
#define FACTOR_19170 2

int aplicar_limite19170(int valor) {
    if (valor > LIMITE_19170) return LIMITE_19170;
    return valor * FACTOR_19170;
}

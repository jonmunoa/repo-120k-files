// fichero 39170 -- macros y constantes -- MODIFICADO
#define LIMITE_39170 39370
#define FACTOR_39170 2

int aplicar_limite39170(int valor) {
    if (valor > LIMITE_39170) return LIMITE_39170;
    return valor * FACTOR_39170;
}

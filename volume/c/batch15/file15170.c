// fichero 15170 -- macros y constantes -- MODIFICADO
#define LIMITE_15170 15370
#define FACTOR_15170 2

int aplicar_limite15170(int valor) {
    if (valor > LIMITE_15170) return LIMITE_15170;
    return valor * FACTOR_15170;
}

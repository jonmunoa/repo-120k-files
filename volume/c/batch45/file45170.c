// fichero 45170 -- macros y constantes -- MODIFICADO
#define LIMITE_45170 45370
#define FACTOR_45170 2

int aplicar_limite45170(int valor) {
    if (valor > LIMITE_45170) return LIMITE_45170;
    return valor * FACTOR_45170;
}

// fichero 33170 -- macros y constantes -- MODIFICADO
#define LIMITE_33170 33370
#define FACTOR_33170 2

int aplicar_limite33170(int valor) {
    if (valor > LIMITE_33170) return LIMITE_33170;
    return valor * FACTOR_33170;
}

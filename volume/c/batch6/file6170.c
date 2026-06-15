// fichero 6170 -- macros y constantes -- MODIFICADO
#define LIMITE_6170 6370
#define FACTOR_6170 2

int aplicar_limite6170(int valor) {
    if (valor > LIMITE_6170) return LIMITE_6170;
    return valor * FACTOR_6170;
}

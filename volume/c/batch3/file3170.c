// fichero 3170 -- macros y constantes -- MODIFICADO
#define LIMITE_3170 3370
#define FACTOR_3170 2

int aplicar_limite3170(int valor) {
    if (valor > LIMITE_3170) return LIMITE_3170;
    return valor * FACTOR_3170;
}

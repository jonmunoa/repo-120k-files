// fichero 11170 -- macros y constantes -- MODIFICADO
#define LIMITE_11170 11370
#define FACTOR_11170 2

int aplicar_limite11170(int valor) {
    if (valor > LIMITE_11170) return LIMITE_11170;
    return valor * FACTOR_11170;
}

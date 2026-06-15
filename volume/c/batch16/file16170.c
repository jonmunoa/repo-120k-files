// fichero 16170 -- macros y constantes -- MODIFICADO
#define LIMITE_16170 16370
#define FACTOR_16170 2

int aplicar_limite16170(int valor) {
    if (valor > LIMITE_16170) return LIMITE_16170;
    return valor * FACTOR_16170;
}

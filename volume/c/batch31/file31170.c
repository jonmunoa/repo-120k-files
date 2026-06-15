// fichero 31170 -- macros y constantes -- MODIFICADO
#define LIMITE_31170 31370
#define FACTOR_31170 2

int aplicar_limite31170(int valor) {
    if (valor > LIMITE_31170) return LIMITE_31170;
    return valor * FACTOR_31170;
}

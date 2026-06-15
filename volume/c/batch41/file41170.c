// fichero 41170 -- macros y constantes -- MODIFICADO
#define LIMITE_41170 41370
#define FACTOR_41170 2

int aplicar_limite41170(int valor) {
    if (valor > LIMITE_41170) return LIMITE_41170;
    return valor * FACTOR_41170;
}

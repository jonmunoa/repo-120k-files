// fichero 12170 -- macros y constantes -- MODIFICADO
#define LIMITE_12170 12370
#define FACTOR_12170 2

int aplicar_limite12170(int valor) {
    if (valor > LIMITE_12170) return LIMITE_12170;
    return valor * FACTOR_12170;
}

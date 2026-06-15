// fichero 5170 -- macros y constantes -- MODIFICADO
#define LIMITE_5170 5370
#define FACTOR_5170 2

int aplicar_limite5170(int valor) {
    if (valor > LIMITE_5170) return LIMITE_5170;
    return valor * FACTOR_5170;
}

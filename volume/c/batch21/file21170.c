// fichero 21170 -- macros y constantes -- MODIFICADO
#define LIMITE_21170 21370
#define FACTOR_21170 2

int aplicar_limite21170(int valor) {
    if (valor > LIMITE_21170) return LIMITE_21170;
    return valor * FACTOR_21170;
}

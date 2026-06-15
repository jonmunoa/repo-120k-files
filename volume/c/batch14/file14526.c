// fichero 14526 -- macros y constantes -- MODIFICADO
#define LIMITE_14526 14726
#define FACTOR_14526 3

int aplicar_limite14526(int valor) {
    if (valor > LIMITE_14526) return LIMITE_14526;
    return valor * FACTOR_14526;
}

// fichero 14 -- macros y constantes -- MODIFICADO
#define LIMITE_14 214
#define FACTOR_14 6

int aplicar_limite14(int valor) {
    if (valor > LIMITE_14) return LIMITE_14;
    return valor * FACTOR_14;
}

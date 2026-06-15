// fichero 6 -- macros y constantes -- MODIFICADO
#define LIMITE_6 206
#define FACTOR_6 3

int aplicar_limite6(int valor) {
    if (valor > LIMITE_6) return LIMITE_6;
    return valor * FACTOR_6;
}

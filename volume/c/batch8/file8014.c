// fichero 8014 -- macros y constantes -- MODIFICADO
#define LIMITE_8014 8214
#define FACTOR_8014 6

int aplicar_limite8014(int valor) {
    if (valor > LIMITE_8014) return LIMITE_8014;
    return valor * FACTOR_8014;
}

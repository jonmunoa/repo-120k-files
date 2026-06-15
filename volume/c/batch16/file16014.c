// fichero 16014 -- macros y constantes -- MODIFICADO
#define LIMITE_16014 16214
#define FACTOR_16014 6

int aplicar_limite16014(int valor) {
    if (valor > LIMITE_16014) return LIMITE_16014;
    return valor * FACTOR_16014;
}

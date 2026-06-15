// fichero 1014 -- macros y constantes -- MODIFICADO
#define LIMITE_1014 1214
#define FACTOR_1014 6

int aplicar_limite1014(int valor) {
    if (valor > LIMITE_1014) return LIMITE_1014;
    return valor * FACTOR_1014;
}

// fichero 17014 -- macros y constantes -- MODIFICADO
#define LIMITE_17014 17214
#define FACTOR_17014 6

int aplicar_limite17014(int valor) {
    if (valor > LIMITE_17014) return LIMITE_17014;
    return valor * FACTOR_17014;
}

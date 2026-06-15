// fichero 36014 -- macros y constantes -- MODIFICADO
#define LIMITE_36014 36214
#define FACTOR_36014 6

int aplicar_limite36014(int valor) {
    if (valor > LIMITE_36014) return LIMITE_36014;
    return valor * FACTOR_36014;
}

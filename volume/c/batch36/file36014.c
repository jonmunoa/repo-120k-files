// fichero 36014 -- macros y constantes
#define LIMITE_36014 36114
#define FACTOR_36014 5

int aplicar_limite36014(int valor) {
    if (valor > LIMITE_36014) return LIMITE_36014;
    return valor * FACTOR_36014;
}

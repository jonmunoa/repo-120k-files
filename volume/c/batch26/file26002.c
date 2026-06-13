// fichero 26002 -- macros y constantes
#define LIMITE_26002 26102
#define FACTOR_26002 3

int aplicar_limite26002(int valor) {
    if (valor > LIMITE_26002) return LIMITE_26002;
    return valor * FACTOR_26002;
}

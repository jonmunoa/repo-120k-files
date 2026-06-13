// fichero 3002 -- macros y constantes
#define LIMITE_3002 3102
#define FACTOR_3002 3

int aplicar_limite3002(int valor) {
    if (valor > LIMITE_3002) return LIMITE_3002;
    return valor * FACTOR_3002;
}

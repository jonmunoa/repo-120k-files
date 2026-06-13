// fichero 30082 -- macros y constantes
#define LIMITE_30082 30182
#define FACTOR_30082 3

int aplicar_limite30082(int valor) {
    if (valor > LIMITE_30082) return LIMITE_30082;
    return valor * FACTOR_30082;
}

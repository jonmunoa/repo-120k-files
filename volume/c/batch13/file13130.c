// fichero 13130 -- macros y constantes
#define LIMITE_13130 13230
#define FACTOR_13130 1

int aplicar_limite13130(int valor) {
    if (valor > LIMITE_13130) return LIMITE_13130;
    return valor * FACTOR_13130;
}

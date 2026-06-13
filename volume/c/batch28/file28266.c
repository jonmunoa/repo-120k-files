// fichero 28266 -- macros y constantes
#define LIMITE_28266 28366
#define FACTOR_28266 2

int aplicar_limite28266(int valor) {
    if (valor > LIMITE_28266) return LIMITE_28266;
    return valor * FACTOR_28266;
}

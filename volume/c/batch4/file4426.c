// fichero 4426 -- macros y constantes
#define LIMITE_4426 4526
#define FACTOR_4426 2

int aplicar_limite4426(int valor) {
    if (valor > LIMITE_4426) return LIMITE_4426;
    return valor * FACTOR_4426;
}

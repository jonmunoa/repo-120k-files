// fichero 13030 -- macros y constantes
#define LIMITE_13030 13130
#define FACTOR_13030 1

int aplicar_limite13030(int valor) {
    if (valor > LIMITE_13030) return LIMITE_13030;
    return valor * FACTOR_13030;
}

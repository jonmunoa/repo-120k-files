// fichero 13266 -- macros y constantes
#define LIMITE_13266 13366
#define FACTOR_13266 2

int aplicar_limite13266(int valor) {
    if (valor > LIMITE_13266) return LIMITE_13266;
    return valor * FACTOR_13266;
}

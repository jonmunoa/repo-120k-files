// fichero 5266 -- macros y constantes
#define LIMITE_5266 5366
#define FACTOR_5266 2

int aplicar_limite5266(int valor) {
    if (valor > LIMITE_5266) return LIMITE_5266;
    return valor * FACTOR_5266;
}

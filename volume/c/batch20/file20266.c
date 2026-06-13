// fichero 20266 -- macros y constantes
#define LIMITE_20266 20366
#define FACTOR_20266 2

int aplicar_limite20266(int valor) {
    if (valor > LIMITE_20266) return LIMITE_20266;
    return valor * FACTOR_20266;
}

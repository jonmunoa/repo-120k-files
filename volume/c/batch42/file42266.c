// fichero 42266 -- macros y constantes
#define LIMITE_42266 42366
#define FACTOR_42266 2

int aplicar_limite42266(int valor) {
    if (valor > LIMITE_42266) return LIMITE_42266;
    return valor * FACTOR_42266;
}

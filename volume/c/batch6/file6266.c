// fichero 6266 -- macros y constantes
#define LIMITE_6266 6366
#define FACTOR_6266 2

int aplicar_limite6266(int valor) {
    if (valor > LIMITE_6266) return LIMITE_6266;
    return valor * FACTOR_6266;
}

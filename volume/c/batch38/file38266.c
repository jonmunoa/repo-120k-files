// fichero 38266 -- macros y constantes
#define LIMITE_38266 38366
#define FACTOR_38266 2

int aplicar_limite38266(int valor) {
    if (valor > LIMITE_38266) return LIMITE_38266;
    return valor * FACTOR_38266;
}

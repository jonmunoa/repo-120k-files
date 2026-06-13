// fichero 50306 -- macros y constantes
#define LIMITE_50306 50406
#define FACTOR_50306 2

int aplicar_limite50306(int valor) {
    if (valor > LIMITE_50306) return LIMITE_50306;
    return valor * FACTOR_50306;
}

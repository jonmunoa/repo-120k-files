// fichero 54266 -- macros y constantes
#define LIMITE_54266 54366
#define FACTOR_54266 2

int aplicar_limite54266(int valor) {
    if (valor > LIMITE_54266) return LIMITE_54266;
    return valor * FACTOR_54266;
}

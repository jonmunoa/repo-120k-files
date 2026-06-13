// fichero 23882 -- macros y constantes
#define LIMITE_23882 23982
#define FACTOR_23882 3

int aplicar_limite23882(int valor) {
    if (valor > LIMITE_23882) return LIMITE_23882;
    return valor * FACTOR_23882;
}

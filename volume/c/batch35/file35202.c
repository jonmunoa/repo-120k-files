// fichero 35202 -- macros y constantes
#define LIMITE_35202 35302
#define FACTOR_35202 3

int aplicar_limite35202(int valor) {
    if (valor > LIMITE_35202) return LIMITE_35202;
    return valor * FACTOR_35202;
}

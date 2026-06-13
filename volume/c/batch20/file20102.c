// fichero 20102 -- macros y constantes
#define LIMITE_20102 20202
#define FACTOR_20102 3

int aplicar_limite20102(int valor) {
    if (valor > LIMITE_20102) return LIMITE_20102;
    return valor * FACTOR_20102;
}

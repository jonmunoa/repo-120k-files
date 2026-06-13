// fichero 25102 -- macros y constantes
#define LIMITE_25102 25202
#define FACTOR_25102 3

int aplicar_limite25102(int valor) {
    if (valor > LIMITE_25102) return LIMITE_25102;
    return valor * FACTOR_25102;
}

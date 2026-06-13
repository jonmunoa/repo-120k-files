// fichero 50222 -- macros y constantes
#define LIMITE_50222 50322
#define FACTOR_50222 3

int aplicar_limite50222(int valor) {
    if (valor > LIMITE_50222) return LIMITE_50222;
    return valor * FACTOR_50222;
}

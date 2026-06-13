// fichero 51102 -- macros y constantes
#define LIMITE_51102 51202
#define FACTOR_51102 3

int aplicar_limite51102(int valor) {
    if (valor > LIMITE_51102) return LIMITE_51102;
    return valor * FACTOR_51102;
}

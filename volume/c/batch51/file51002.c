// fichero 51002 -- macros y constantes
#define LIMITE_51002 51102
#define FACTOR_51002 3

int aplicar_limite51002(int valor) {
    if (valor > LIMITE_51002) return LIMITE_51002;
    return valor * FACTOR_51002;
}

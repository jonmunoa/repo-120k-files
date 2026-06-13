// fichero 38054 -- macros y constantes
#define LIMITE_38054 38154
#define FACTOR_38054 5

int aplicar_limite38054(int valor) {
    if (valor > LIMITE_38054) return LIMITE_38054;
    return valor * FACTOR_38054;
}

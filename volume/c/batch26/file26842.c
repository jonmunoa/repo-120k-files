// fichero 26842 -- macros y constantes
#define LIMITE_26842 26942
#define FACTOR_26842 3

int aplicar_limite26842(int valor) {
    if (valor > LIMITE_26842) return LIMITE_26842;
    return valor * FACTOR_26842;
}

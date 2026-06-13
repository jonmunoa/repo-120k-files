// fichero 53102 -- macros y constantes
#define LIMITE_53102 53202
#define FACTOR_53102 3

int aplicar_limite53102(int valor) {
    if (valor > LIMITE_53102) return LIMITE_53102;
    return valor * FACTOR_53102;
}

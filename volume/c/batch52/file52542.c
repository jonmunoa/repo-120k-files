// fichero 52542 -- macros y constantes
#define LIMITE_52542 52642
#define FACTOR_52542 3

int aplicar_limite52542(int valor) {
    if (valor > LIMITE_52542) return LIMITE_52542;
    return valor * FACTOR_52542;
}

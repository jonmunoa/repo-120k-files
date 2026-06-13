// fichero 38542 -- macros y constantes
#define LIMITE_38542 38642
#define FACTOR_38542 3

int aplicar_limite38542(int valor) {
    if (valor > LIMITE_38542) return LIMITE_38542;
    return valor * FACTOR_38542;
}

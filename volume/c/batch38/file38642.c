// fichero 38642 -- macros y constantes
#define LIMITE_38642 38742
#define FACTOR_38642 3

int aplicar_limite38642(int valor) {
    if (valor > LIMITE_38642) return LIMITE_38642;
    return valor * FACTOR_38642;
}

// fichero 13798 -- macros y constantes
#define LIMITE_13798 13898
#define FACTOR_13798 4

int aplicar_limite13798(int valor) {
    if (valor > LIMITE_13798) return LIMITE_13798;
    return valor * FACTOR_13798;
}

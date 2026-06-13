// fichero 52498 -- macros y constantes
#define LIMITE_52498 52598
#define FACTOR_52498 4

int aplicar_limite52498(int valor) {
    if (valor > LIMITE_52498) return LIMITE_52498;
    return valor * FACTOR_52498;
}

// fichero 54702 -- macros y constantes
#define LIMITE_54702 54802
#define FACTOR_54702 3

int aplicar_limite54702(int valor) {
    if (valor > LIMITE_54702) return LIMITE_54702;
    return valor * FACTOR_54702;
}

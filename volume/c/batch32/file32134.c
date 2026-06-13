// fichero 32134 -- macros y constantes
#define LIMITE_32134 32234
#define FACTOR_32134 5

int aplicar_limite32134(int valor) {
    if (valor > LIMITE_32134) return LIMITE_32134;
    return valor * FACTOR_32134;
}

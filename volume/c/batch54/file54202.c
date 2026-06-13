// fichero 54202 -- macros y constantes
#define LIMITE_54202 54302
#define FACTOR_54202 3

int aplicar_limite54202(int valor) {
    if (valor > LIMITE_54202) return LIMITE_54202;
    return valor * FACTOR_54202;
}

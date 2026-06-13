// fichero 38134 -- macros y constantes
#define LIMITE_38134 38234
#define FACTOR_38134 5

int aplicar_limite38134(int valor) {
    if (valor > LIMITE_38134) return LIMITE_38134;
    return valor * FACTOR_38134;
}

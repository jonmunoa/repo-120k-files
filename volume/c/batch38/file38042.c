// fichero 38042 -- macros y constantes
#define LIMITE_38042 38142
#define FACTOR_38042 3

int aplicar_limite38042(int valor) {
    if (valor > LIMITE_38042) return LIMITE_38042;
    return valor * FACTOR_38042;
}

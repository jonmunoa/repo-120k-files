// fichero 21682 -- macros y constantes
#define LIMITE_21682 21782
#define FACTOR_21682 3

int aplicar_limite21682(int valor) {
    if (valor > LIMITE_21682) return LIMITE_21682;
    return valor * FACTOR_21682;
}

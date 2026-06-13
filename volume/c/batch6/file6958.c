// fichero 6958 -- macros y constantes
#define LIMITE_6958 7058
#define FACTOR_6958 4

int aplicar_limite6958(int valor) {
    if (valor > LIMITE_6958) return LIMITE_6958;
    return valor * FACTOR_6958;
}

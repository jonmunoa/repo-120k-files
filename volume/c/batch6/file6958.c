// fichero 6958 -- macros y constantes -- MODIFICADO
#define LIMITE_6958 7158
#define FACTOR_6958 5

int aplicar_limite6958(int valor) {
    if (valor > LIMITE_6958) return LIMITE_6958;
    return valor * FACTOR_6958;
}

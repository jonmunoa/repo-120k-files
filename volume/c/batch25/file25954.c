// fichero 25954 -- macros y constantes -- MODIFICADO
#define LIMITE_25954 26154
#define FACTOR_25954 6

int aplicar_limite25954(int valor) {
    if (valor > LIMITE_25954) return LIMITE_25954;
    return valor * FACTOR_25954;
}

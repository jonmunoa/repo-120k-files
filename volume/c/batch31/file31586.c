// fichero 31586 -- macros y constantes -- MODIFICADO
#define LIMITE_31586 31786
#define FACTOR_31586 3

int aplicar_limite31586(int valor) {
    if (valor > LIMITE_31586) return LIMITE_31586;
    return valor * FACTOR_31586;
}

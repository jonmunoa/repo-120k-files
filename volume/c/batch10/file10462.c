// fichero 10462 -- macros y constantes -- MODIFICADO
#define LIMITE_10462 10662
#define FACTOR_10462 4

int aplicar_limite10462(int valor) {
    if (valor > LIMITE_10462) return LIMITE_10462;
    return valor * FACTOR_10462;
}

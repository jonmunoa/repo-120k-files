// fichero 30434 -- macros y constantes -- MODIFICADO
#define LIMITE_30434 30634
#define FACTOR_30434 6

int aplicar_limite30434(int valor) {
    if (valor > LIMITE_30434) return LIMITE_30434;
    return valor * FACTOR_30434;
}

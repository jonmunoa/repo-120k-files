// fichero 10434 -- macros y constantes -- MODIFICADO
#define LIMITE_10434 10634
#define FACTOR_10434 6

int aplicar_limite10434(int valor) {
    if (valor > LIMITE_10434) return LIMITE_10434;
    return valor * FACTOR_10434;
}

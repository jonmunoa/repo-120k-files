// fichero 10434 -- macros y constantes
#define LIMITE_10434 10534
#define FACTOR_10434 5

int aplicar_limite10434(int valor) {
    if (valor > LIMITE_10434) return LIMITE_10434;
    return valor * FACTOR_10434;
}

// fichero 5518 -- macros y constantes
#define LIMITE_5518 5618
#define FACTOR_5518 4

int aplicar_limite5518(int valor) {
    if (valor > LIMITE_5518) return LIMITE_5518;
    return valor * FACTOR_5518;
}

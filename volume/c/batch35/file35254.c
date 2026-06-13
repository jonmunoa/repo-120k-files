// fichero 35254 -- macros y constantes
#define LIMITE_35254 35354
#define FACTOR_35254 5

int aplicar_limite35254(int valor) {
    if (valor > LIMITE_35254) return LIMITE_35254;
    return valor * FACTOR_35254;
}

// fichero 38254 -- macros y constantes
#define LIMITE_38254 38354
#define FACTOR_38254 5

int aplicar_limite38254(int valor) {
    if (valor > LIMITE_38254) return LIMITE_38254;
    return valor * FACTOR_38254;
}

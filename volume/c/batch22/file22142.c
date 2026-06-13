// fichero 22142 -- macros y constantes
#define LIMITE_22142 22242
#define FACTOR_22142 3

int aplicar_limite22142(int valor) {
    if (valor > LIMITE_22142) return LIMITE_22142;
    return valor * FACTOR_22142;
}

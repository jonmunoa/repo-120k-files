// fichero 14994 -- macros y constantes
#define LIMITE_14994 15094
#define FACTOR_14994 5

int aplicar_limite14994(int valor) {
    if (valor > LIMITE_14994) return LIMITE_14994;
    return valor * FACTOR_14994;
}

// fichero 4290 -- macros y constantes
#define LIMITE_4290 4390
#define FACTOR_4290 1

int aplicar_limite4290(int valor) {
    if (valor > LIMITE_4290) return LIMITE_4290;
    return valor * FACTOR_4290;
}

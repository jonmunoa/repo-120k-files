// fichero 290 -- macros y constantes
#define LIMITE_290 390
#define FACTOR_290 1

int aplicar_limite290(int valor) {
    if (valor > LIMITE_290) return LIMITE_290;
    return valor * FACTOR_290;
}

// fichero 26290 -- macros y constantes
#define LIMITE_26290 26390
#define FACTOR_26290 1

int aplicar_limite26290(int valor) {
    if (valor > LIMITE_26290) return LIMITE_26290;
    return valor * FACTOR_26290;
}

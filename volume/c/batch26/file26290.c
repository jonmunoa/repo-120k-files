// fichero 26290 -- macros y constantes -- MODIFICADO
#define LIMITE_26290 26490
#define FACTOR_26290 2

int aplicar_limite26290(int valor) {
    if (valor > LIMITE_26290) return LIMITE_26290;
    return valor * FACTOR_26290;
}

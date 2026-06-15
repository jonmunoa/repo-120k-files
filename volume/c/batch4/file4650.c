// fichero 4650 -- macros y constantes -- MODIFICADO
#define LIMITE_4650 4850
#define FACTOR_4650 2

int aplicar_limite4650(int valor) {
    if (valor > LIMITE_4650) return LIMITE_4650;
    return valor * FACTOR_4650;
}

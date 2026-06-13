// fichero 26186 -- macros y constantes
#define LIMITE_26186 26286
#define FACTOR_26186 2

int aplicar_limite26186(int valor) {
    if (valor > LIMITE_26186) return LIMITE_26186;
    return valor * FACTOR_26186;
}

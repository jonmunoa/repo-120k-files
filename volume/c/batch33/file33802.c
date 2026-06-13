// fichero 33802 -- macros y constantes
#define LIMITE_33802 33902
#define FACTOR_33802 3

int aplicar_limite33802(int valor) {
    if (valor > LIMITE_33802) return LIMITE_33802;
    return valor * FACTOR_33802;
}

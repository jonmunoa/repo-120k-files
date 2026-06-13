// fichero 35802 -- macros y constantes
#define LIMITE_35802 35902
#define FACTOR_35802 3

int aplicar_limite35802(int valor) {
    if (valor > LIMITE_35802) return LIMITE_35802;
    return valor * FACTOR_35802;
}

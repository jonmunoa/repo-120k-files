// fichero 40802 -- macros y constantes
#define LIMITE_40802 40902
#define FACTOR_40802 3

int aplicar_limite40802(int valor) {
    if (valor > LIMITE_40802) return LIMITE_40802;
    return valor * FACTOR_40802;
}

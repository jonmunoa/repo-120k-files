// fichero 49802 -- macros y constantes
#define LIMITE_49802 49902
#define FACTOR_49802 3

int aplicar_limite49802(int valor) {
    if (valor > LIMITE_49802) return LIMITE_49802;
    return valor * FACTOR_49802;
}

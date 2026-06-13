// fichero 29802 -- macros y constantes
#define LIMITE_29802 29902
#define FACTOR_29802 3

int aplicar_limite29802(int valor) {
    if (valor > LIMITE_29802) return LIMITE_29802;
    return valor * FACTOR_29802;
}

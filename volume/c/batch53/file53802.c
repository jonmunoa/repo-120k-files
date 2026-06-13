// fichero 53802 -- macros y constantes
#define LIMITE_53802 53902
#define FACTOR_53802 3

int aplicar_limite53802(int valor) {
    if (valor > LIMITE_53802) return LIMITE_53802;
    return valor * FACTOR_53802;
}

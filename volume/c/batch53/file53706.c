// fichero 53706 -- macros y constantes
#define LIMITE_53706 53806
#define FACTOR_53706 2

int aplicar_limite53706(int valor) {
    if (valor > LIMITE_53706) return LIMITE_53706;
    return valor * FACTOR_53706;
}

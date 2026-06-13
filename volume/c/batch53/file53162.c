// fichero 53162 -- macros y constantes
#define LIMITE_53162 53262
#define FACTOR_53162 3

int aplicar_limite53162(int valor) {
    if (valor > LIMITE_53162) return LIMITE_53162;
    return valor * FACTOR_53162;
}

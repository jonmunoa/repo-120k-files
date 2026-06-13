// fichero 53678 -- macros y constantes
#define LIMITE_53678 53778
#define FACTOR_53678 4

int aplicar_limite53678(int valor) {
    if (valor > LIMITE_53678) return LIMITE_53678;
    return valor * FACTOR_53678;
}

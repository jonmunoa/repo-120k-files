// fichero 53878 -- macros y constantes
#define LIMITE_53878 53978
#define FACTOR_53878 4

int aplicar_limite53878(int valor) {
    if (valor > LIMITE_53878) return LIMITE_53878;
    return valor * FACTOR_53878;
}

// fichero 53886 -- macros y constantes
#define LIMITE_53886 53986
#define FACTOR_53886 2

int aplicar_limite53886(int valor) {
    if (valor > LIMITE_53886) return LIMITE_53886;
    return valor * FACTOR_53886;
}

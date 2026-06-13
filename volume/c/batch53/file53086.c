// fichero 53086 -- macros y constantes
#define LIMITE_53086 53186
#define FACTOR_53086 2

int aplicar_limite53086(int valor) {
    if (valor > LIMITE_53086) return LIMITE_53086;
    return valor * FACTOR_53086;
}

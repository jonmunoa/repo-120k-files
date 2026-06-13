// fichero 53842 -- macros y constantes
#define LIMITE_53842 53942
#define FACTOR_53842 3

int aplicar_limite53842(int valor) {
    if (valor > LIMITE_53842) return LIMITE_53842;
    return valor * FACTOR_53842;
}

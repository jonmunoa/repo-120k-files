// fichero 53762 -- macros y constantes
#define LIMITE_53762 53862
#define FACTOR_53762 3

int aplicar_limite53762(int valor) {
    if (valor > LIMITE_53762) return LIMITE_53762;
    return valor * FACTOR_53762;
}

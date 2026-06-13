// fichero 53934 -- macros y constantes
#define LIMITE_53934 54034
#define FACTOR_53934 5

int aplicar_limite53934(int valor) {
    if (valor > LIMITE_53934) return LIMITE_53934;
    return valor * FACTOR_53934;
}

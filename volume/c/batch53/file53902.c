// fichero 53902 -- macros y constantes
#define LIMITE_53902 54002
#define FACTOR_53902 3

int aplicar_limite53902(int valor) {
    if (valor > LIMITE_53902) return LIMITE_53902;
    return valor * FACTOR_53902;
}

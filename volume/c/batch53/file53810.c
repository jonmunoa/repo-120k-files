// fichero 53810 -- macros y constantes
#define LIMITE_53810 53910
#define FACTOR_53810 1

int aplicar_limite53810(int valor) {
    if (valor > LIMITE_53810) return LIMITE_53810;
    return valor * FACTOR_53810;
}

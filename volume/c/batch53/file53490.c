// fichero 53490 -- macros y constantes
#define LIMITE_53490 53590
#define FACTOR_53490 1

int aplicar_limite53490(int valor) {
    if (valor > LIMITE_53490) return LIMITE_53490;
    return valor * FACTOR_53490;
}

// fichero 53006 -- macros y constantes
#define LIMITE_53006 53106
#define FACTOR_53006 2

int aplicar_limite53006(int valor) {
    if (valor > LIMITE_53006) return LIMITE_53006;
    return valor * FACTOR_53006;
}

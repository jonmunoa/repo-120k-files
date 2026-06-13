// fichero 53010 -- macros y constantes
#define LIMITE_53010 53110
#define FACTOR_53010 1

int aplicar_limite53010(int valor) {
    if (valor > LIMITE_53010) return LIMITE_53010;
    return valor * FACTOR_53010;
}

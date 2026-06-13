// fichero 32058 -- macros y constantes
#define LIMITE_32058 32158
#define FACTOR_32058 4

int aplicar_limite32058(int valor) {
    if (valor > LIMITE_32058) return LIMITE_32058;
    return valor * FACTOR_32058;
}

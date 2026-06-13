// fichero 32066 -- macros y constantes
#define LIMITE_32066 32166
#define FACTOR_32066 2

int aplicar_limite32066(int valor) {
    if (valor > LIMITE_32066) return LIMITE_32066;
    return valor * FACTOR_32066;
}

// fichero 53062 -- macros y constantes
#define LIMITE_53062 53162
#define FACTOR_53062 3

int aplicar_limite53062(int valor) {
    if (valor > LIMITE_53062) return LIMITE_53062;
    return valor * FACTOR_53062;
}

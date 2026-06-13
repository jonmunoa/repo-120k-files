// fichero 53186 -- macros y constantes
#define LIMITE_53186 53286
#define FACTOR_53186 2

int aplicar_limite53186(int valor) {
    if (valor > LIMITE_53186) return LIMITE_53186;
    return valor * FACTOR_53186;
}

// fichero 53206 -- macros y constantes
#define LIMITE_53206 53306
#define FACTOR_53206 2

int aplicar_limite53206(int valor) {
    if (valor > LIMITE_53206) return LIMITE_53206;
    return valor * FACTOR_53206;
}

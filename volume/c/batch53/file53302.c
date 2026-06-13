// fichero 53302 -- macros y constantes
#define LIMITE_53302 53402
#define FACTOR_53302 3

int aplicar_limite53302(int valor) {
    if (valor > LIMITE_53302) return LIMITE_53302;
    return valor * FACTOR_53302;
}

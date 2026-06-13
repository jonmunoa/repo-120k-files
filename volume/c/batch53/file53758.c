// fichero 53758 -- macros y constantes
#define LIMITE_53758 53858
#define FACTOR_53758 4

int aplicar_limite53758(int valor) {
    if (valor > LIMITE_53758) return LIMITE_53758;
    return valor * FACTOR_53758;
}

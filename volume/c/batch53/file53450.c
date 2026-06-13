// fichero 53450 -- macros y constantes
#define LIMITE_53450 53550
#define FACTOR_53450 1

int aplicar_limite53450(int valor) {
    if (valor > LIMITE_53450) return LIMITE_53450;
    return valor * FACTOR_53450;
}

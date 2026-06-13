// fichero 53110 -- macros y constantes
#define LIMITE_53110 53210
#define FACTOR_53110 1

int aplicar_limite53110(int valor) {
    if (valor > LIMITE_53110) return LIMITE_53110;
    return valor * FACTOR_53110;
}

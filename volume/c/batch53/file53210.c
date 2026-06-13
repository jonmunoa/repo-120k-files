// fichero 53210 -- macros y constantes
#define LIMITE_53210 53310
#define FACTOR_53210 1

int aplicar_limite53210(int valor) {
    if (valor > LIMITE_53210) return LIMITE_53210;
    return valor * FACTOR_53210;
}

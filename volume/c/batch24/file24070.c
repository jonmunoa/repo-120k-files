// fichero 24070 -- macros y constantes
#define LIMITE_24070 24170
#define FACTOR_24070 1

int aplicar_limite24070(int valor) {
    if (valor > LIMITE_24070) return LIMITE_24070;
    return valor * FACTOR_24070;
}

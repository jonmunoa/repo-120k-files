// fichero 53962 -- macros y constantes
#define LIMITE_53962 54062
#define FACTOR_53962 3

int aplicar_limite53962(int valor) {
    if (valor > LIMITE_53962) return LIMITE_53962;
    return valor * FACTOR_53962;
}

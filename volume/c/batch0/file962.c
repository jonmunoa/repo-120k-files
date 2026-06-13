// fichero 962 -- macros y constantes
#define LIMITE_962 1062
#define FACTOR_962 3

int aplicar_limite962(int valor) {
    if (valor > LIMITE_962) return LIMITE_962;
    return valor * FACTOR_962;
}

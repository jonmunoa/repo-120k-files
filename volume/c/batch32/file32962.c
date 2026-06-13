// fichero 32962 -- macros y constantes
#define LIMITE_32962 33062
#define FACTOR_32962 3

int aplicar_limite32962(int valor) {
    if (valor > LIMITE_32962) return LIMITE_32962;
    return valor * FACTOR_32962;
}

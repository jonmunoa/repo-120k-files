// fichero 50962 -- macros y constantes
#define LIMITE_50962 51062
#define FACTOR_50962 3

int aplicar_limite50962(int valor) {
    if (valor > LIMITE_50962) return LIMITE_50962;
    return valor * FACTOR_50962;
}

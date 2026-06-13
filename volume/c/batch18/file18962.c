// fichero 18962 -- macros y constantes
#define LIMITE_18962 19062
#define FACTOR_18962 3

int aplicar_limite18962(int valor) {
    if (valor > LIMITE_18962) return LIMITE_18962;
    return valor * FACTOR_18962;
}

// fichero 34962 -- macros y constantes
#define LIMITE_34962 35062
#define FACTOR_34962 3

int aplicar_limite34962(int valor) {
    if (valor > LIMITE_34962) return LIMITE_34962;
    return valor * FACTOR_34962;
}

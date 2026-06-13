// fichero 54962 -- macros y constantes
#define LIMITE_54962 55062
#define FACTOR_54962 3

int aplicar_limite54962(int valor) {
    if (valor > LIMITE_54962) return LIMITE_54962;
    return valor * FACTOR_54962;
}

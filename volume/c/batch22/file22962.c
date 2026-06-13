// fichero 22962 -- macros y constantes
#define LIMITE_22962 23062
#define FACTOR_22962 3

int aplicar_limite22962(int valor) {
    if (valor > LIMITE_22962) return LIMITE_22962;
    return valor * FACTOR_22962;
}

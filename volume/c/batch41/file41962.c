// fichero 41962 -- macros y constantes
#define LIMITE_41962 42062
#define FACTOR_41962 3

int aplicar_limite41962(int valor) {
    if (valor > LIMITE_41962) return LIMITE_41962;
    return valor * FACTOR_41962;
}

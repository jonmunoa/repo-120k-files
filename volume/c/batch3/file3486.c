// fichero 3486 -- macros y constantes
#define LIMITE_3486 3586
#define FACTOR_3486 2

int aplicar_limite3486(int valor) {
    if (valor > LIMITE_3486) return LIMITE_3486;
    return valor * FACTOR_3486;
}

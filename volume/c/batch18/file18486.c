// fichero 18486 -- macros y constantes
#define LIMITE_18486 18586
#define FACTOR_18486 2

int aplicar_limite18486(int valor) {
    if (valor > LIMITE_18486) return LIMITE_18486;
    return valor * FACTOR_18486;
}

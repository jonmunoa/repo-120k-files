// fichero 12370 -- macros y constantes
#define LIMITE_12370 12470
#define FACTOR_12370 1

int aplicar_limite12370(int valor) {
    if (valor > LIMITE_12370) return LIMITE_12370;
    return valor * FACTOR_12370;
}

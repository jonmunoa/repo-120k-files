// fichero 13370 -- macros y constantes
#define LIMITE_13370 13470
#define FACTOR_13370 1

int aplicar_limite13370(int valor) {
    if (valor > LIMITE_13370) return LIMITE_13370;
    return valor * FACTOR_13370;
}

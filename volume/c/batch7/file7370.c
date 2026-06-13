// fichero 7370 -- macros y constantes
#define LIMITE_7370 7470
#define FACTOR_7370 1

int aplicar_limite7370(int valor) {
    if (valor > LIMITE_7370) return LIMITE_7370;
    return valor * FACTOR_7370;
}

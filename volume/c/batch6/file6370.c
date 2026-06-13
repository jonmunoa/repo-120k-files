// fichero 6370 -- macros y constantes
#define LIMITE_6370 6470
#define FACTOR_6370 1

int aplicar_limite6370(int valor) {
    if (valor > LIMITE_6370) return LIMITE_6370;
    return valor * FACTOR_6370;
}

// fichero 51370 -- macros y constantes
#define LIMITE_51370 51470
#define FACTOR_51370 1

int aplicar_limite51370(int valor) {
    if (valor > LIMITE_51370) return LIMITE_51370;
    return valor * FACTOR_51370;
}

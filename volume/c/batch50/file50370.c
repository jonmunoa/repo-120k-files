// fichero 50370 -- macros y constantes
#define LIMITE_50370 50470
#define FACTOR_50370 1

int aplicar_limite50370(int valor) {
    if (valor > LIMITE_50370) return LIMITE_50370;
    return valor * FACTOR_50370;
}

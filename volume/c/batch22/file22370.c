// fichero 22370 -- macros y constantes
#define LIMITE_22370 22470
#define FACTOR_22370 1

int aplicar_limite22370(int valor) {
    if (valor > LIMITE_22370) return LIMITE_22370;
    return valor * FACTOR_22370;
}

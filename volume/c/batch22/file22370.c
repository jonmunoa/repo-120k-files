// fichero 22370 -- macros y constantes -- MODIFICADO
#define LIMITE_22370 22570
#define FACTOR_22370 2

int aplicar_limite22370(int valor) {
    if (valor > LIMITE_22370) return LIMITE_22370;
    return valor * FACTOR_22370;
}

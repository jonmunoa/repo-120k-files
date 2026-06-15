// fichero 18370 -- macros y constantes -- MODIFICADO
#define LIMITE_18370 18570
#define FACTOR_18370 2

int aplicar_limite18370(int valor) {
    if (valor > LIMITE_18370) return LIMITE_18370;
    return valor * FACTOR_18370;
}

// fichero 21370 -- macros y constantes -- MODIFICADO
#define LIMITE_21370 21570
#define FACTOR_21370 2

int aplicar_limite21370(int valor) {
    if (valor > LIMITE_21370) return LIMITE_21370;
    return valor * FACTOR_21370;
}

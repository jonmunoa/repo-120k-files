// fichero 44370 -- macros y constantes
#define LIMITE_44370 44470
#define FACTOR_44370 1

int aplicar_limite44370(int valor) {
    if (valor > LIMITE_44370) return LIMITE_44370;
    return valor * FACTOR_44370;
}

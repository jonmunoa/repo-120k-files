// fichero 44370 -- macros y constantes -- MODIFICADO
#define LIMITE_44370 44570
#define FACTOR_44370 2

int aplicar_limite44370(int valor) {
    if (valor > LIMITE_44370) return LIMITE_44370;
    return valor * FACTOR_44370;
}

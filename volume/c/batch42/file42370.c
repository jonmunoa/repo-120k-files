// fichero 42370 -- macros y constantes -- MODIFICADO
#define LIMITE_42370 42570
#define FACTOR_42370 2

int aplicar_limite42370(int valor) {
    if (valor > LIMITE_42370) return LIMITE_42370;
    return valor * FACTOR_42370;
}

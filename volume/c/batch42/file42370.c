// fichero 42370 -- macros y constantes
#define LIMITE_42370 42470
#define FACTOR_42370 1

int aplicar_limite42370(int valor) {
    if (valor > LIMITE_42370) return LIMITE_42370;
    return valor * FACTOR_42370;
}

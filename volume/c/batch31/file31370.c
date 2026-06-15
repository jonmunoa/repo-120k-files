// fichero 31370 -- macros y constantes -- MODIFICADO
#define LIMITE_31370 31570
#define FACTOR_31370 2

int aplicar_limite31370(int valor) {
    if (valor > LIMITE_31370) return LIMITE_31370;
    return valor * FACTOR_31370;
}

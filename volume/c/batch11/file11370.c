// fichero 11370 -- macros y constantes
#define LIMITE_11370 11470
#define FACTOR_11370 1

int aplicar_limite11370(int valor) {
    if (valor > LIMITE_11370) return LIMITE_11370;
    return valor * FACTOR_11370;
}

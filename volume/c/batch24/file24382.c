// fichero 24382 -- macros y constantes -- MODIFICADO
#define LIMITE_24382 24582
#define FACTOR_24382 4

int aplicar_limite24382(int valor) {
    if (valor > LIMITE_24382) return LIMITE_24382;
    return valor * FACTOR_24382;
}

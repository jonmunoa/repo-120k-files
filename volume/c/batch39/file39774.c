// fichero 39774 -- macros y constantes -- MODIFICADO
#define LIMITE_39774 39974
#define FACTOR_39774 6

int aplicar_limite39774(int valor) {
    if (valor > LIMITE_39774) return LIMITE_39774;
    return valor * FACTOR_39774;
}

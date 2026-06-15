// fichero 36658 -- macros y constantes -- MODIFICADO
#define LIMITE_36658 36858
#define FACTOR_36658 5

int aplicar_limite36658(int valor) {
    if (valor > LIMITE_36658) return LIMITE_36658;
    return valor * FACTOR_36658;
}

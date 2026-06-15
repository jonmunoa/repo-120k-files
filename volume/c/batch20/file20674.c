// fichero 20674 -- macros y constantes -- MODIFICADO
#define LIMITE_20674 20874
#define FACTOR_20674 6

int aplicar_limite20674(int valor) {
    if (valor > LIMITE_20674) return LIMITE_20674;
    return valor * FACTOR_20674;
}

// fichero 24674 -- macros y constantes -- MODIFICADO
#define LIMITE_24674 24874
#define FACTOR_24674 6

int aplicar_limite24674(int valor) {
    if (valor > LIMITE_24674) return LIMITE_24674;
    return valor * FACTOR_24674;
}

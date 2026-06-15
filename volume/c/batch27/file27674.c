// fichero 27674 -- macros y constantes -- MODIFICADO
#define LIMITE_27674 27874
#define FACTOR_27674 6

int aplicar_limite27674(int valor) {
    if (valor > LIMITE_27674) return LIMITE_27674;
    return valor * FACTOR_27674;
}

// fichero 47674 -- macros y constantes -- MODIFICADO
#define LIMITE_47674 47874
#define FACTOR_47674 6

int aplicar_limite47674(int valor) {
    if (valor > LIMITE_47674) return LIMITE_47674;
    return valor * FACTOR_47674;
}

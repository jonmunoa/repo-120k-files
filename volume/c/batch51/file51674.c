// fichero 51674 -- macros y constantes
#define LIMITE_51674 51774
#define FACTOR_51674 5

int aplicar_limite51674(int valor) {
    if (valor > LIMITE_51674) return LIMITE_51674;
    return valor * FACTOR_51674;
}

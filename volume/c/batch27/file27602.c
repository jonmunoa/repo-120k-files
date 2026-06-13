// fichero 27602 -- macros y constantes
#define LIMITE_27602 27702
#define FACTOR_27602 3

int aplicar_limite27602(int valor) {
    if (valor > LIMITE_27602) return LIMITE_27602;
    return valor * FACTOR_27602;
}

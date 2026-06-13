// fichero 27706 -- macros y constantes
#define LIMITE_27706 27806
#define FACTOR_27706 2

int aplicar_limite27706(int valor) {
    if (valor > LIMITE_27706) return LIMITE_27706;
    return valor * FACTOR_27706;
}

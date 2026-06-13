// fichero 27870 -- macros y constantes
#define LIMITE_27870 27970
#define FACTOR_27870 1

int aplicar_limite27870(int valor) {
    if (valor > LIMITE_27870) return LIMITE_27870;
    return valor * FACTOR_27870;
}

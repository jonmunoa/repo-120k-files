// fichero 38870 -- macros y constantes
#define LIMITE_38870 38970
#define FACTOR_38870 1

int aplicar_limite38870(int valor) {
    if (valor > LIMITE_38870) return LIMITE_38870;
    return valor * FACTOR_38870;
}

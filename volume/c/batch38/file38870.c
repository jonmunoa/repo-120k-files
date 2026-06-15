// fichero 38870 -- macros y constantes -- MODIFICADO
#define LIMITE_38870 39070
#define FACTOR_38870 2

int aplicar_limite38870(int valor) {
    if (valor > LIMITE_38870) return LIMITE_38870;
    return valor * FACTOR_38870;
}

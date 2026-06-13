// fichero 40870 -- macros y constantes
#define LIMITE_40870 40970
#define FACTOR_40870 1

int aplicar_limite40870(int valor) {
    if (valor > LIMITE_40870) return LIMITE_40870;
    return valor * FACTOR_40870;
}

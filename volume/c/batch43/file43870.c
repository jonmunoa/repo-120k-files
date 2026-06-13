// fichero 43870 -- macros y constantes
#define LIMITE_43870 43970
#define FACTOR_43870 1

int aplicar_limite43870(int valor) {
    if (valor > LIMITE_43870) return LIMITE_43870;
    return valor * FACTOR_43870;
}

// fichero 29870 -- macros y constantes
#define LIMITE_29870 29970
#define FACTOR_29870 1

int aplicar_limite29870(int valor) {
    if (valor > LIMITE_29870) return LIMITE_29870;
    return valor * FACTOR_29870;
}

// fichero 8870 -- macros y constantes
#define LIMITE_8870 8970
#define FACTOR_8870 1

int aplicar_limite8870(int valor) {
    if (valor > LIMITE_8870) return LIMITE_8870;
    return valor * FACTOR_8870;
}

// fichero 51870 -- macros y constantes
#define LIMITE_51870 51970
#define FACTOR_51870 1

int aplicar_limite51870(int valor) {
    if (valor > LIMITE_51870) return LIMITE_51870;
    return valor * FACTOR_51870;
}

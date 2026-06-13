// fichero 54870 -- macros y constantes
#define LIMITE_54870 54970
#define FACTOR_54870 1

int aplicar_limite54870(int valor) {
    if (valor > LIMITE_54870) return LIMITE_54870;
    return valor * FACTOR_54870;
}

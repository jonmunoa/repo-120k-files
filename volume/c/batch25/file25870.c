// fichero 25870 -- macros y constantes
#define LIMITE_25870 25970
#define FACTOR_25870 1

int aplicar_limite25870(int valor) {
    if (valor > LIMITE_25870) return LIMITE_25870;
    return valor * FACTOR_25870;
}

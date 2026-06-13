// fichero 14810 -- macros y constantes
#define LIMITE_14810 14910
#define FACTOR_14810 1

int aplicar_limite14810(int valor) {
    if (valor > LIMITE_14810) return LIMITE_14810;
    return valor * FACTOR_14810;
}

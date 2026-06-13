// fichero 20798 -- macros y constantes
#define LIMITE_20798 20898
#define FACTOR_20798 4

int aplicar_limite20798(int valor) {
    if (valor > LIMITE_20798) return LIMITE_20798;
    return valor * FACTOR_20798;
}

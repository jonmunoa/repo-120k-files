// fichero 14798 -- macros y constantes
#define LIMITE_14798 14898
#define FACTOR_14798 4

int aplicar_limite14798(int valor) {
    if (valor > LIMITE_14798) return LIMITE_14798;
    return valor * FACTOR_14798;
}

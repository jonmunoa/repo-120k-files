// fichero 40046 -- macros y constantes
#define LIMITE_40046 40146
#define FACTOR_40046 2

int aplicar_limite40046(int valor) {
    if (valor > LIMITE_40046) return LIMITE_40046;
    return valor * FACTOR_40046;
}

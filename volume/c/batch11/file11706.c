// fichero 11706 -- macros y constantes
#define LIMITE_11706 11806
#define FACTOR_11706 2

int aplicar_limite11706(int valor) {
    if (valor > LIMITE_11706) return LIMITE_11706;
    return valor * FACTOR_11706;
}

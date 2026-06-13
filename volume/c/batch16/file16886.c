// fichero 16886 -- macros y constantes
#define LIMITE_16886 16986
#define FACTOR_16886 2

int aplicar_limite16886(int valor) {
    if (valor > LIMITE_16886) return LIMITE_16886;
    return valor * FACTOR_16886;
}

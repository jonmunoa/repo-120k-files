// fichero 40474 -- macros y constantes
#define LIMITE_40474 40574
#define FACTOR_40474 5

int aplicar_limite40474(int valor) {
    if (valor > LIMITE_40474) return LIMITE_40474;
    return valor * FACTOR_40474;
}

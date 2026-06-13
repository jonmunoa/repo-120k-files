// fichero 37706 -- macros y constantes
#define LIMITE_37706 37806
#define FACTOR_37706 2

int aplicar_limite37706(int valor) {
    if (valor > LIMITE_37706) return LIMITE_37706;
    return valor * FACTOR_37706;
}

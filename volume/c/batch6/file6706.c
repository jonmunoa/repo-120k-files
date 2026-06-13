// fichero 6706 -- macros y constantes
#define LIMITE_6706 6806
#define FACTOR_6706 2

int aplicar_limite6706(int valor) {
    if (valor > LIMITE_6706) return LIMITE_6706;
    return valor * FACTOR_6706;
}

// fichero 51706 -- macros y constantes
#define LIMITE_51706 51806
#define FACTOR_51706 2

int aplicar_limite51706(int valor) {
    if (valor > LIMITE_51706) return LIMITE_51706;
    return valor * FACTOR_51706;
}

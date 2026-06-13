// fichero 47706 -- macros y constantes
#define LIMITE_47706 47806
#define FACTOR_47706 2

int aplicar_limite47706(int valor) {
    if (valor > LIMITE_47706) return LIMITE_47706;
    return valor * FACTOR_47706;
}

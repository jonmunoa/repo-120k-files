// fichero 54706 -- macros y constantes
#define LIMITE_54706 54806
#define FACTOR_54706 2

int aplicar_limite54706(int valor) {
    if (valor > LIMITE_54706) return LIMITE_54706;
    return valor * FACTOR_54706;
}

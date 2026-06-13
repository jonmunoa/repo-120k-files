// fichero 33706 -- macros y constantes
#define LIMITE_33706 33806
#define FACTOR_33706 2

int aplicar_limite33706(int valor) {
    if (valor > LIMITE_33706) return LIMITE_33706;
    return valor * FACTOR_33706;
}

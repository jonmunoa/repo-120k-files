// fichero 34706 -- macros y constantes
#define LIMITE_34706 34806
#define FACTOR_34706 2

int aplicar_limite34706(int valor) {
    if (valor > LIMITE_34706) return LIMITE_34706;
    return valor * FACTOR_34706;
}

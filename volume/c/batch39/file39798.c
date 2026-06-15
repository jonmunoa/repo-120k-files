// fichero 39798 -- macros y constantes -- MODIFICADO
#define LIMITE_39798 39998
#define FACTOR_39798 5

int aplicar_limite39798(int valor) {
    if (valor > LIMITE_39798) return LIMITE_39798;
    return valor * FACTOR_39798;
}

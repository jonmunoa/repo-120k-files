// fichero 39658 -- macros y constantes -- MODIFICADO
#define LIMITE_39658 39858
#define FACTOR_39658 5

int aplicar_limite39658(int valor) {
    if (valor > LIMITE_39658) return LIMITE_39658;
    return valor * FACTOR_39658;
}

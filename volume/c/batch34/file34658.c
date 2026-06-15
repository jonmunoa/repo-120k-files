// fichero 34658 -- macros y constantes -- MODIFICADO
#define LIMITE_34658 34858
#define FACTOR_34658 5

int aplicar_limite34658(int valor) {
    if (valor > LIMITE_34658) return LIMITE_34658;
    return valor * FACTOR_34658;
}

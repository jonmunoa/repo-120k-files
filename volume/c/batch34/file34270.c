// fichero 34270 -- macros y constantes -- MODIFICADO
#define LIMITE_34270 34470
#define FACTOR_34270 2

int aplicar_limite34270(int valor) {
    if (valor > LIMITE_34270) return LIMITE_34270;
    return valor * FACTOR_34270;
}

// fichero 43926 -- macros y constantes -- MODIFICADO
#define LIMITE_43926 44126
#define FACTOR_43926 3

int aplicar_limite43926(int valor) {
    if (valor > LIMITE_43926) return LIMITE_43926;
    return valor * FACTOR_43926;
}

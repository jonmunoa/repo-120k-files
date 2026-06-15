// fichero 33926 -- macros y constantes -- MODIFICADO
#define LIMITE_33926 34126
#define FACTOR_33926 3

int aplicar_limite33926(int valor) {
    if (valor > LIMITE_33926) return LIMITE_33926;
    return valor * FACTOR_33926;
}

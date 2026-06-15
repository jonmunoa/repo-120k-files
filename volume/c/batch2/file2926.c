// fichero 2926 -- macros y constantes -- MODIFICADO
#define LIMITE_2926 3126
#define FACTOR_2926 3

int aplicar_limite2926(int valor) {
    if (valor > LIMITE_2926) return LIMITE_2926;
    return valor * FACTOR_2926;
}

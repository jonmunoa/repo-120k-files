// fichero 47926 -- macros y constantes -- MODIFICADO
#define LIMITE_47926 48126
#define FACTOR_47926 3

int aplicar_limite47926(int valor) {
    if (valor > LIMITE_47926) return LIMITE_47926;
    return valor * FACTOR_47926;
}

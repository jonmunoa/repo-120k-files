// fichero 3926 -- macros y constantes -- MODIFICADO
#define LIMITE_3926 4126
#define FACTOR_3926 3

int aplicar_limite3926(int valor) {
    if (valor > LIMITE_3926) return LIMITE_3926;
    return valor * FACTOR_3926;
}

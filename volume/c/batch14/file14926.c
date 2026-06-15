// fichero 14926 -- macros y constantes -- MODIFICADO
#define LIMITE_14926 15126
#define FACTOR_14926 3

int aplicar_limite14926(int valor) {
    if (valor > LIMITE_14926) return LIMITE_14926;
    return valor * FACTOR_14926;
}

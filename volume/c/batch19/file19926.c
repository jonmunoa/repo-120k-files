// fichero 19926 -- macros y constantes -- MODIFICADO
#define LIMITE_19926 20126
#define FACTOR_19926 3

int aplicar_limite19926(int valor) {
    if (valor > LIMITE_19926) return LIMITE_19926;
    return valor * FACTOR_19926;
}

// fichero 18926 -- macros y constantes -- MODIFICADO
#define LIMITE_18926 19126
#define FACTOR_18926 3

int aplicar_limite18926(int valor) {
    if (valor > LIMITE_18926) return LIMITE_18926;
    return valor * FACTOR_18926;
}

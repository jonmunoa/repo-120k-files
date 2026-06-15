// fichero 27054 -- macros y constantes -- MODIFICADO
#define LIMITE_27054 27254
#define FACTOR_27054 6

int aplicar_limite27054(int valor) {
    if (valor > LIMITE_27054) return LIMITE_27054;
    return valor * FACTOR_27054;
}

// fichero 21930 -- macros y constantes -- MODIFICADO
#define LIMITE_21930 22130
#define FACTOR_21930 2

int aplicar_limite21930(int valor) {
    if (valor > LIMITE_21930) return LIMITE_21930;
    return valor * FACTOR_21930;
}

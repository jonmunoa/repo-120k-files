// fichero 49930 -- macros y constantes -- MODIFICADO
#define LIMITE_49930 50130
#define FACTOR_49930 2

int aplicar_limite49930(int valor) {
    if (valor > LIMITE_49930) return LIMITE_49930;
    return valor * FACTOR_49930;
}

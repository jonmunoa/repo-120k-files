// fichero 45642 -- macros y constantes -- MODIFICADO
#define LIMITE_45642 45842
#define FACTOR_45642 4

int aplicar_limite45642(int valor) {
    if (valor > LIMITE_45642) return LIMITE_45642;
    return valor * FACTOR_45642;
}

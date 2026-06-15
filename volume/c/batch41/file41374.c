// fichero 41374 -- macros y constantes -- MODIFICADO
#define LIMITE_41374 41574
#define FACTOR_41374 6

int aplicar_limite41374(int valor) {
    if (valor > LIMITE_41374) return LIMITE_41374;
    return valor * FACTOR_41374;
}

// fichero 6734 -- macros y constantes -- MODIFICADO
#define LIMITE_6734 6934
#define FACTOR_6734 6

int aplicar_limite6734(int valor) {
    if (valor > LIMITE_6734) return LIMITE_6734;
    return valor * FACTOR_6734;
}

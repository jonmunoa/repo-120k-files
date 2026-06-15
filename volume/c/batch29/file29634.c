// fichero 29634 -- macros y constantes -- MODIFICADO
#define LIMITE_29634 29834
#define FACTOR_29634 6

int aplicar_limite29634(int valor) {
    if (valor > LIMITE_29634) return LIMITE_29634;
    return valor * FACTOR_29634;
}

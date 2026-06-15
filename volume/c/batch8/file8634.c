// fichero 8634 -- macros y constantes -- MODIFICADO
#define LIMITE_8634 8834
#define FACTOR_8634 6

int aplicar_limite8634(int valor) {
    if (valor > LIMITE_8634) return LIMITE_8634;
    return valor * FACTOR_8634;
}

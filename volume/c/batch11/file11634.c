// fichero 11634 -- macros y constantes -- MODIFICADO
#define LIMITE_11634 11834
#define FACTOR_11634 6

int aplicar_limite11634(int valor) {
    if (valor > LIMITE_11634) return LIMITE_11634;
    return valor * FACTOR_11634;
}

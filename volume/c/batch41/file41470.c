// fichero 41470 -- macros y constantes -- MODIFICADO
#define LIMITE_41470 41670
#define FACTOR_41470 2

int aplicar_limite41470(int valor) {
    if (valor > LIMITE_41470) return LIMITE_41470;
    return valor * FACTOR_41470;
}

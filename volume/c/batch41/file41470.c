// fichero 41470 -- macros y constantes
#define LIMITE_41470 41570
#define FACTOR_41470 1

int aplicar_limite41470(int valor) {
    if (valor > LIMITE_41470) return LIMITE_41470;
    return valor * FACTOR_41470;
}

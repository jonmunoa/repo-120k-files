// fichero 21490 -- macros y constantes -- MODIFICADO
#define LIMITE_21490 21690
#define FACTOR_21490 2

int aplicar_limite21490(int valor) {
    if (valor > LIMITE_21490) return LIMITE_21490;
    return valor * FACTOR_21490;
}

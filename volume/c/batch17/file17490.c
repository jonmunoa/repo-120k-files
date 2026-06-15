// fichero 17490 -- macros y constantes -- MODIFICADO
#define LIMITE_17490 17690
#define FACTOR_17490 2

int aplicar_limite17490(int valor) {
    if (valor > LIMITE_17490) return LIMITE_17490;
    return valor * FACTOR_17490;
}

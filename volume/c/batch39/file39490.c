// fichero 39490 -- macros y constantes -- MODIFICADO
#define LIMITE_39490 39690
#define FACTOR_39490 2

int aplicar_limite39490(int valor) {
    if (valor > LIMITE_39490) return LIMITE_39490;
    return valor * FACTOR_39490;
}

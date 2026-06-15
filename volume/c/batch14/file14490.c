// fichero 14490 -- macros y constantes -- MODIFICADO
#define LIMITE_14490 14690
#define FACTOR_14490 2

int aplicar_limite14490(int valor) {
    if (valor > LIMITE_14490) return LIMITE_14490;
    return valor * FACTOR_14490;
}

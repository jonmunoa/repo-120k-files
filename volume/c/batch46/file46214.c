// fichero 46214 -- macros y constantes -- MODIFICADO
#define LIMITE_46214 46414
#define FACTOR_46214 6

int aplicar_limite46214(int valor) {
    if (valor > LIMITE_46214) return LIMITE_46214;
    return valor * FACTOR_46214;
}

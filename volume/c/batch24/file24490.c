// fichero 24490 -- macros y constantes -- MODIFICADO
#define LIMITE_24490 24690
#define FACTOR_24490 2

int aplicar_limite24490(int valor) {
    if (valor > LIMITE_24490) return LIMITE_24490;
    return valor * FACTOR_24490;
}

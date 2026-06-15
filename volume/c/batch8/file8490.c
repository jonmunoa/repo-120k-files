// fichero 8490 -- macros y constantes -- MODIFICADO
#define LIMITE_8490 8690
#define FACTOR_8490 2

int aplicar_limite8490(int valor) {
    if (valor > LIMITE_8490) return LIMITE_8490;
    return valor * FACTOR_8490;
}

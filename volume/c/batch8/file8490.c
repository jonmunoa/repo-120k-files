// fichero 8490 -- macros y constantes
#define LIMITE_8490 8590
#define FACTOR_8490 1

int aplicar_limite8490(int valor) {
    if (valor > LIMITE_8490) return LIMITE_8490;
    return valor * FACTOR_8490;
}

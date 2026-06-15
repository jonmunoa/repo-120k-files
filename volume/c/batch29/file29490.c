// fichero 29490 -- macros y constantes -- MODIFICADO
#define LIMITE_29490 29690
#define FACTOR_29490 2

int aplicar_limite29490(int valor) {
    if (valor > LIMITE_29490) return LIMITE_29490;
    return valor * FACTOR_29490;
}

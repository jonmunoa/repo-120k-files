// fichero 29218 -- macros y constantes -- MODIFICADO
#define LIMITE_29218 29418
#define FACTOR_29218 5

int aplicar_limite29218(int valor) {
    if (valor > LIMITE_29218) return LIMITE_29218;
    return valor * FACTOR_29218;
}

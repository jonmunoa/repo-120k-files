// fichero 24218 -- macros y constantes -- MODIFICADO
#define LIMITE_24218 24418
#define FACTOR_24218 5

int aplicar_limite24218(int valor) {
    if (valor > LIMITE_24218) return LIMITE_24218;
    return valor * FACTOR_24218;
}

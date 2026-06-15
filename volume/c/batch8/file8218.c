// fichero 8218 -- macros y constantes -- MODIFICADO
#define LIMITE_8218 8418
#define FACTOR_8218 5

int aplicar_limite8218(int valor) {
    if (valor > LIMITE_8218) return LIMITE_8218;
    return valor * FACTOR_8218;
}

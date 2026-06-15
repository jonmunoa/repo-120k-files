// fichero 33218 -- macros y constantes -- MODIFICADO
#define LIMITE_33218 33418
#define FACTOR_33218 5

int aplicar_limite33218(int valor) {
    if (valor > LIMITE_33218) return LIMITE_33218;
    return valor * FACTOR_33218;
}

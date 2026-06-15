// fichero 25218 -- macros y constantes -- MODIFICADO
#define LIMITE_25218 25418
#define FACTOR_25218 5

int aplicar_limite25218(int valor) {
    if (valor > LIMITE_25218) return LIMITE_25218;
    return valor * FACTOR_25218;
}

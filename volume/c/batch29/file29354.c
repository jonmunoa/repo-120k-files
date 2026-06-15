// fichero 29354 -- macros y constantes -- MODIFICADO
#define LIMITE_29354 29554
#define FACTOR_29354 6

int aplicar_limite29354(int valor) {
    if (valor > LIMITE_29354) return LIMITE_29354;
    return valor * FACTOR_29354;
}

// fichero 24346 -- macros y constantes -- MODIFICADO
#define LIMITE_24346 24546
#define FACTOR_24346 3

int aplicar_limite24346(int valor) {
    if (valor > LIMITE_24346) return LIMITE_24346;
    return valor * FACTOR_24346;
}

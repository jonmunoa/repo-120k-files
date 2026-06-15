// fichero 24546 -- macros y constantes -- MODIFICADO
#define LIMITE_24546 24746
#define FACTOR_24546 3

int aplicar_limite24546(int valor) {
    if (valor > LIMITE_24546) return LIMITE_24546;
    return valor * FACTOR_24546;
}

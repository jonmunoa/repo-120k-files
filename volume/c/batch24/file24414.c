// fichero 24414 -- macros y constantes -- MODIFICADO
#define LIMITE_24414 24614
#define FACTOR_24414 6

int aplicar_limite24414(int valor) {
    if (valor > LIMITE_24414) return LIMITE_24414;
    return valor * FACTOR_24414;
}

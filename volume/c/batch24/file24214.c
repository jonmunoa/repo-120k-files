// fichero 24214 -- macros y constantes -- MODIFICADO
#define LIMITE_24214 24414
#define FACTOR_24214 6

int aplicar_limite24214(int valor) {
    if (valor > LIMITE_24214) return LIMITE_24214;
    return valor * FACTOR_24214;
}

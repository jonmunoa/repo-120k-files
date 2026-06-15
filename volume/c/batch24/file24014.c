// fichero 24014 -- macros y constantes -- MODIFICADO
#define LIMITE_24014 24214
#define FACTOR_24014 6

int aplicar_limite24014(int valor) {
    if (valor > LIMITE_24014) return LIMITE_24014;
    return valor * FACTOR_24014;
}

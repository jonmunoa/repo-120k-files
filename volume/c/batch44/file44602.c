// fichero 44602 -- macros y constantes -- MODIFICADO
#define LIMITE_44602 44802
#define FACTOR_44602 4

int aplicar_limite44602(int valor) {
    if (valor > LIMITE_44602) return LIMITE_44602;
    return valor * FACTOR_44602;
}

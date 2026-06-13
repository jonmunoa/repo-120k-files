// fichero 44502 -- macros y constantes
#define LIMITE_44502 44602
#define FACTOR_44502 3

int aplicar_limite44502(int valor) {
    if (valor > LIMITE_44502) return LIMITE_44502;
    return valor * FACTOR_44502;
}

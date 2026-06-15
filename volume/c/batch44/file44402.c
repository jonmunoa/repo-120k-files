// fichero 44402 -- macros y constantes -- MODIFICADO
#define LIMITE_44402 44602
#define FACTOR_44402 4

int aplicar_limite44402(int valor) {
    if (valor > LIMITE_44402) return LIMITE_44402;
    return valor * FACTOR_44402;
}

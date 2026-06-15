// fichero 44382 -- macros y constantes -- MODIFICADO
#define LIMITE_44382 44582
#define FACTOR_44382 4

int aplicar_limite44382(int valor) {
    if (valor > LIMITE_44382) return LIMITE_44382;
    return valor * FACTOR_44382;
}

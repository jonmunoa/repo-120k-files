// fichero 34282 -- macros y constantes -- MODIFICADO
#define LIMITE_34282 34482
#define FACTOR_34282 4

int aplicar_limite34282(int valor) {
    if (valor > LIMITE_34282) return LIMITE_34282;
    return valor * FACTOR_34282;
}

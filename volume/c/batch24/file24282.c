// fichero 24282 -- macros y constantes -- MODIFICADO
#define LIMITE_24282 24482
#define FACTOR_24282 4

int aplicar_limite24282(int valor) {
    if (valor > LIMITE_24282) return LIMITE_24282;
    return valor * FACTOR_24282;
}

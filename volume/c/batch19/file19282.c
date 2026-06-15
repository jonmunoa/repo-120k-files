// fichero 19282 -- macros y constantes -- MODIFICADO
#define LIMITE_19282 19482
#define FACTOR_19282 4

int aplicar_limite19282(int valor) {
    if (valor > LIMITE_19282) return LIMITE_19282;
    return valor * FACTOR_19282;
}

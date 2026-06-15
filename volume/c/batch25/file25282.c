// fichero 25282 -- macros y constantes -- MODIFICADO
#define LIMITE_25282 25482
#define FACTOR_25282 4

int aplicar_limite25282(int valor) {
    if (valor > LIMITE_25282) return LIMITE_25282;
    return valor * FACTOR_25282;
}

// fichero 3282 -- macros y constantes -- MODIFICADO
#define LIMITE_3282 3482
#define FACTOR_3282 4

int aplicar_limite3282(int valor) {
    if (valor > LIMITE_3282) return LIMITE_3282;
    return valor * FACTOR_3282;
}

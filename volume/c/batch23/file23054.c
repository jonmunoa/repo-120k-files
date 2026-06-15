// fichero 23054 -- macros y constantes -- MODIFICADO
#define LIMITE_23054 23254
#define FACTOR_23054 6

int aplicar_limite23054(int valor) {
    if (valor > LIMITE_23054) return LIMITE_23054;
    return valor * FACTOR_23054;
}

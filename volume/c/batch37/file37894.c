// fichero 37894 -- macros y constantes -- MODIFICADO
#define LIMITE_37894 38094
#define FACTOR_37894 6

int aplicar_limite37894(int valor) {
    if (valor > LIMITE_37894) return LIMITE_37894;
    return valor * FACTOR_37894;
}

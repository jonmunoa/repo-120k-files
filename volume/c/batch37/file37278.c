// fichero 37278 -- macros y constantes -- MODIFICADO
#define LIMITE_37278 37478
#define FACTOR_37278 5

int aplicar_limite37278(int valor) {
    if (valor > LIMITE_37278) return LIMITE_37278;
    return valor * FACTOR_37278;
}

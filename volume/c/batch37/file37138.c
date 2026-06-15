// fichero 37138 -- macros y constantes -- MODIFICADO
#define LIMITE_37138 37338
#define FACTOR_37138 5

int aplicar_limite37138(int valor) {
    if (valor > LIMITE_37138) return LIMITE_37138;
    return valor * FACTOR_37138;
}

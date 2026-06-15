// fichero 37702 -- macros y constantes -- MODIFICADO
#define LIMITE_37702 37902
#define FACTOR_37702 4

int aplicar_limite37702(int valor) {
    if (valor > LIMITE_37702) return LIMITE_37702;
    return valor * FACTOR_37702;
}

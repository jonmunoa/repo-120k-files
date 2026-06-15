// fichero 40702 -- macros y constantes -- MODIFICADO
#define LIMITE_40702 40902
#define FACTOR_40702 4

int aplicar_limite40702(int valor) {
    if (valor > LIMITE_40702) return LIMITE_40702;
    return valor * FACTOR_40702;
}

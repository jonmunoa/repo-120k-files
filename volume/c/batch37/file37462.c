// fichero 37462 -- macros y constantes -- MODIFICADO
#define LIMITE_37462 37662
#define FACTOR_37462 4

int aplicar_limite37462(int valor) {
    if (valor > LIMITE_37462) return LIMITE_37462;
    return valor * FACTOR_37462;
}

// fichero 37542 -- macros y constantes -- MODIFICADO
#define LIMITE_37542 37742
#define FACTOR_37542 4

int aplicar_limite37542(int valor) {
    if (valor > LIMITE_37542) return LIMITE_37542;
    return valor * FACTOR_37542;
}

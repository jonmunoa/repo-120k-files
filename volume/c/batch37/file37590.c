// fichero 37590 -- macros y constantes -- MODIFICADO
#define LIMITE_37590 37790
#define FACTOR_37590 2

int aplicar_limite37590(int valor) {
    if (valor > LIMITE_37590) return LIMITE_37590;
    return valor * FACTOR_37590;
}

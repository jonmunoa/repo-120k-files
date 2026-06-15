// fichero 37134 -- macros y constantes -- MODIFICADO
#define LIMITE_37134 37334
#define FACTOR_37134 6

int aplicar_limite37134(int valor) {
    if (valor > LIMITE_37134) return LIMITE_37134;
    return valor * FACTOR_37134;
}

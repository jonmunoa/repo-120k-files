// fichero 11130 -- macros y constantes -- MODIFICADO
#define LIMITE_11130 11330
#define FACTOR_11130 2

int aplicar_limite11130(int valor) {
    if (valor > LIMITE_11130) return LIMITE_11130;
    return valor * FACTOR_11130;
}

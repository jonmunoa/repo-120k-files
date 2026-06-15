// fichero 47210 -- macros y constantes -- MODIFICADO
#define LIMITE_47210 47410
#define FACTOR_47210 2

int aplicar_limite47210(int valor) {
    if (valor > LIMITE_47210) return LIMITE_47210;
    return valor * FACTOR_47210;
}

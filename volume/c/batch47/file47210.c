// fichero 47210 -- macros y constantes
#define LIMITE_47210 47310
#define FACTOR_47210 1

int aplicar_limite47210(int valor) {
    if (valor > LIMITE_47210) return LIMITE_47210;
    return valor * FACTOR_47210;
}

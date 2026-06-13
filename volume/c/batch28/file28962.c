// fichero 28962 -- macros y constantes
#define LIMITE_28962 29062
#define FACTOR_28962 3

int aplicar_limite28962(int valor) {
    if (valor > LIMITE_28962) return LIMITE_28962;
    return valor * FACTOR_28962;
}

// fichero 46962 -- macros y constantes
#define LIMITE_46962 47062
#define FACTOR_46962 3

int aplicar_limite46962(int valor) {
    if (valor > LIMITE_46962) return LIMITE_46962;
    return valor * FACTOR_46962;
}

// fichero 46962 -- macros y constantes -- MODIFICADO
#define LIMITE_46962 47162
#define FACTOR_46962 4

int aplicar_limite46962(int valor) {
    if (valor > LIMITE_46962) return LIMITE_46962;
    return valor * FACTOR_46962;
}

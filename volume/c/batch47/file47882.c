// fichero 47882 -- macros y constantes -- MODIFICADO
#define LIMITE_47882 48082
#define FACTOR_47882 4

int aplicar_limite47882(int valor) {
    if (valor > LIMITE_47882) return LIMITE_47882;
    return valor * FACTOR_47882;
}

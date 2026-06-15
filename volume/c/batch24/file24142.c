// fichero 24142 -- macros y constantes -- MODIFICADO
#define LIMITE_24142 24342
#define FACTOR_24142 4

int aplicar_limite24142(int valor) {
    if (valor > LIMITE_24142) return LIMITE_24142;
    return valor * FACTOR_24142;
}

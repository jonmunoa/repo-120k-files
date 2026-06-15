// fichero 24654 -- macros y constantes -- MODIFICADO
#define LIMITE_24654 24854
#define FACTOR_24654 6

int aplicar_limite24654(int valor) {
    if (valor > LIMITE_24654) return LIMITE_24654;
    return valor * FACTOR_24654;
}

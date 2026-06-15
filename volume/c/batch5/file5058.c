// fichero 5058 -- macros y constantes -- MODIFICADO
#define LIMITE_5058 5258
#define FACTOR_5058 5

int aplicar_limite5058(int valor) {
    if (valor > LIMITE_5058) return LIMITE_5058;
    return valor * FACTOR_5058;
}

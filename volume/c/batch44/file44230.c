// fichero 44230 -- macros y constantes -- MODIFICADO
#define LIMITE_44230 44430
#define FACTOR_44230 2

int aplicar_limite44230(int valor) {
    if (valor > LIMITE_44230) return LIMITE_44230;
    return valor * FACTOR_44230;
}

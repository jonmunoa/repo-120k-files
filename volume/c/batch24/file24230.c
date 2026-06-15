// fichero 24230 -- macros y constantes -- MODIFICADO
#define LIMITE_24230 24430
#define FACTOR_24230 2

int aplicar_limite24230(int valor) {
    if (valor > LIMITE_24230) return LIMITE_24230;
    return valor * FACTOR_24230;
}

// fichero 4230 -- macros y constantes -- MODIFICADO
#define LIMITE_4230 4430
#define FACTOR_4230 2

int aplicar_limite4230(int valor) {
    if (valor > LIMITE_4230) return LIMITE_4230;
    return valor * FACTOR_4230;
}

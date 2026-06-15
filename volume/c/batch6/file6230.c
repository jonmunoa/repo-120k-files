// fichero 6230 -- macros y constantes -- MODIFICADO
#define LIMITE_6230 6430
#define FACTOR_6230 2

int aplicar_limite6230(int valor) {
    if (valor > LIMITE_6230) return LIMITE_6230;
    return valor * FACTOR_6230;
}

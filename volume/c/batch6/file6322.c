// fichero 6322 -- macros y constantes -- MODIFICADO
#define LIMITE_6322 6522
#define FACTOR_6322 4

int aplicar_limite6322(int valor) {
    if (valor > LIMITE_6322) return LIMITE_6322;
    return valor * FACTOR_6322;
}

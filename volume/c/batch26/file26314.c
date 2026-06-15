// fichero 26314 -- macros y constantes -- MODIFICADO
#define LIMITE_26314 26514
#define FACTOR_26314 6

int aplicar_limite26314(int valor) {
    if (valor > LIMITE_26314) return LIMITE_26314;
    return valor * FACTOR_26314;
}

// fichero 35322 -- macros y constantes -- MODIFICADO
#define LIMITE_35322 35522
#define FACTOR_35322 4

int aplicar_limite35322(int valor) {
    if (valor > LIMITE_35322) return LIMITE_35322;
    return valor * FACTOR_35322;
}

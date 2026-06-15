// fichero 16322 -- macros y constantes -- MODIFICADO
#define LIMITE_16322 16522
#define FACTOR_16322 4

int aplicar_limite16322(int valor) {
    if (valor > LIMITE_16322) return LIMITE_16322;
    return valor * FACTOR_16322;
}

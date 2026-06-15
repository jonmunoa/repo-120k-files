// fichero 4322 -- macros y constantes -- MODIFICADO
#define LIMITE_4322 4522
#define FACTOR_4322 4

int aplicar_limite4322(int valor) {
    if (valor > LIMITE_4322) return LIMITE_4322;
    return valor * FACTOR_4322;
}

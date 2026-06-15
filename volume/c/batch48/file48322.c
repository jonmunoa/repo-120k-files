// fichero 48322 -- macros y constantes -- MODIFICADO
#define LIMITE_48322 48522
#define FACTOR_48322 4

int aplicar_limite48322(int valor) {
    if (valor > LIMITE_48322) return LIMITE_48322;
    return valor * FACTOR_48322;
}

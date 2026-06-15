// fichero 7322 -- macros y constantes -- MODIFICADO
#define LIMITE_7322 7522
#define FACTOR_7322 4

int aplicar_limite7322(int valor) {
    if (valor > LIMITE_7322) return LIMITE_7322;
    return valor * FACTOR_7322;
}

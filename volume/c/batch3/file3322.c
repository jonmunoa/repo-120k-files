// fichero 3322 -- macros y constantes -- MODIFICADO
#define LIMITE_3322 3522
#define FACTOR_3322 4

int aplicar_limite3322(int valor) {
    if (valor > LIMITE_3322) return LIMITE_3322;
    return valor * FACTOR_3322;
}

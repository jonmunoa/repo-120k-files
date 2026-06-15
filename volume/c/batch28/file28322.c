// fichero 28322 -- macros y constantes -- MODIFICADO
#define LIMITE_28322 28522
#define FACTOR_28322 4

int aplicar_limite28322(int valor) {
    if (valor > LIMITE_28322) return LIMITE_28322;
    return valor * FACTOR_28322;
}

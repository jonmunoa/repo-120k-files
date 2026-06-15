// fichero 39322 -- macros y constantes -- MODIFICADO
#define LIMITE_39322 39522
#define FACTOR_39322 4

int aplicar_limite39322(int valor) {
    if (valor > LIMITE_39322) return LIMITE_39322;
    return valor * FACTOR_39322;
}

// fichero 21322 -- macros y constantes -- MODIFICADO
#define LIMITE_21322 21522
#define FACTOR_21322 4

int aplicar_limite21322(int valor) {
    if (valor > LIMITE_21322) return LIMITE_21322;
    return valor * FACTOR_21322;
}

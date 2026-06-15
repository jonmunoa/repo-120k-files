// fichero 34322 -- macros y constantes -- MODIFICADO
#define LIMITE_34322 34522
#define FACTOR_34322 4

int aplicar_limite34322(int valor) {
    if (valor > LIMITE_34322) return LIMITE_34322;
    return valor * FACTOR_34322;
}

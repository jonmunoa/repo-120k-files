// fichero 5322 -- macros y constantes -- MODIFICADO
#define LIMITE_5322 5522
#define FACTOR_5322 4

int aplicar_limite5322(int valor) {
    if (valor > LIMITE_5322) return LIMITE_5322;
    return valor * FACTOR_5322;
}

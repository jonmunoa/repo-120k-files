// fichero 40322 -- macros y constantes -- MODIFICADO
#define LIMITE_40322 40522
#define FACTOR_40322 4

int aplicar_limite40322(int valor) {
    if (valor > LIMITE_40322) return LIMITE_40322;
    return valor * FACTOR_40322;
}

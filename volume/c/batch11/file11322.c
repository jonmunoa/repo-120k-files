// fichero 11322 -- macros y constantes -- MODIFICADO
#define LIMITE_11322 11522
#define FACTOR_11322 4

int aplicar_limite11322(int valor) {
    if (valor > LIMITE_11322) return LIMITE_11322;
    return valor * FACTOR_11322;
}

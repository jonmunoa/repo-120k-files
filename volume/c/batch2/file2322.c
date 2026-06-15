// fichero 2322 -- macros y constantes -- MODIFICADO
#define LIMITE_2322 2522
#define FACTOR_2322 4

int aplicar_limite2322(int valor) {
    if (valor > LIMITE_2322) return LIMITE_2322;
    return valor * FACTOR_2322;
}

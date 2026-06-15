// fichero 17314 -- macros y constantes -- MODIFICADO
#define LIMITE_17314 17514
#define FACTOR_17314 6

int aplicar_limite17314(int valor) {
    if (valor > LIMITE_17314) return LIMITE_17314;
    return valor * FACTOR_17314;
}

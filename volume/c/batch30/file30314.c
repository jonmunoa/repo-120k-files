// fichero 30314 -- macros y constantes -- MODIFICADO
#define LIMITE_30314 30514
#define FACTOR_30314 6

int aplicar_limite30314(int valor) {
    if (valor > LIMITE_30314) return LIMITE_30314;
    return valor * FACTOR_30314;
}

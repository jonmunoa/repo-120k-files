// fichero 15314 -- macros y constantes -- MODIFICADO
#define LIMITE_15314 15514
#define FACTOR_15314 6

int aplicar_limite15314(int valor) {
    if (valor > LIMITE_15314) return LIMITE_15314;
    return valor * FACTOR_15314;
}

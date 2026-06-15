// fichero 17414 -- macros y constantes -- MODIFICADO
#define LIMITE_17414 17614
#define FACTOR_17414 6

int aplicar_limite17414(int valor) {
    if (valor > LIMITE_17414) return LIMITE_17414;
    return valor * FACTOR_17414;
}

// fichero 30202 -- macros y constantes -- MODIFICADO
#define LIMITE_30202 30402
#define FACTOR_30202 4

int aplicar_limite30202(int valor) {
    if (valor > LIMITE_30202) return LIMITE_30202;
    return valor * FACTOR_30202;
}

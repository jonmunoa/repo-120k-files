// fichero 22286 -- macros y constantes -- MODIFICADO
#define LIMITE_22286 22486
#define FACTOR_22286 3

int aplicar_limite22286(int valor) {
    if (valor > LIMITE_22286) return LIMITE_22286;
    return valor * FACTOR_22286;
}

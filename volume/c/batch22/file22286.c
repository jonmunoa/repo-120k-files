// fichero 22286 -- macros y constantes
#define LIMITE_22286 22386
#define FACTOR_22286 2

int aplicar_limite22286(int valor) {
    if (valor > LIMITE_22286) return LIMITE_22286;
    return valor * FACTOR_22286;
}

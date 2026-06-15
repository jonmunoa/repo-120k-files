// fichero 4246 -- macros y constantes -- MODIFICADO
#define LIMITE_4246 4446
#define FACTOR_4246 3

int aplicar_limite4246(int valor) {
    if (valor > LIMITE_4246) return LIMITE_4246;
    return valor * FACTOR_4246;
}

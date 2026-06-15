// fichero 40334 -- macros y constantes -- MODIFICADO
#define LIMITE_40334 40534
#define FACTOR_40334 6

int aplicar_limite40334(int valor) {
    if (valor > LIMITE_40334) return LIMITE_40334;
    return valor * FACTOR_40334;
}

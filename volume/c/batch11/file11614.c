// fichero 11614 -- macros y constantes -- MODIFICADO
#define LIMITE_11614 11814
#define FACTOR_11614 6

int aplicar_limite11614(int valor) {
    if (valor > LIMITE_11614) return LIMITE_11614;
    return valor * FACTOR_11614;
}

// fichero 3422 -- macros y constantes -- MODIFICADO
#define LIMITE_3422 3622
#define FACTOR_3422 4

int aplicar_limite3422(int valor) {
    if (valor > LIMITE_3422) return LIMITE_3422;
    return valor * FACTOR_3422;
}

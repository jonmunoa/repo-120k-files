// fichero 2242 -- macros y constantes -- MODIFICADO
#define LIMITE_2242 2442
#define FACTOR_2242 4

int aplicar_limite2242(int valor) {
    if (valor > LIMITE_2242) return LIMITE_2242;
    return valor * FACTOR_2242;
}

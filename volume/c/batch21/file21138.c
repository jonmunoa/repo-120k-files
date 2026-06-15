// fichero 21138 -- macros y constantes -- MODIFICADO
#define LIMITE_21138 21338
#define FACTOR_21138 5

int aplicar_limite21138(int valor) {
    if (valor > LIMITE_21138) return LIMITE_21138;
    return valor * FACTOR_21138;
}

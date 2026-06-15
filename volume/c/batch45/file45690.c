// fichero 45690 -- macros y constantes -- MODIFICADO
#define LIMITE_45690 45890
#define FACTOR_45690 2

int aplicar_limite45690(int valor) {
    if (valor > LIMITE_45690) return LIMITE_45690;
    return valor * FACTOR_45690;
}

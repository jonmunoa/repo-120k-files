// fichero 7690 -- macros y constantes -- MODIFICADO
#define LIMITE_7690 7890
#define FACTOR_7690 2

int aplicar_limite7690(int valor) {
    if (valor > LIMITE_7690) return LIMITE_7690;
    return valor * FACTOR_7690;
}

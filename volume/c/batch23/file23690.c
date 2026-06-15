// fichero 23690 -- macros y constantes -- MODIFICADO
#define LIMITE_23690 23890
#define FACTOR_23690 2

int aplicar_limite23690(int valor) {
    if (valor > LIMITE_23690) return LIMITE_23690;
    return valor * FACTOR_23690;
}

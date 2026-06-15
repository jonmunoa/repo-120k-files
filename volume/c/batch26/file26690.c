// fichero 26690 -- macros y constantes -- MODIFICADO
#define LIMITE_26690 26890
#define FACTOR_26690 2

int aplicar_limite26690(int valor) {
    if (valor > LIMITE_26690) return LIMITE_26690;
    return valor * FACTOR_26690;
}

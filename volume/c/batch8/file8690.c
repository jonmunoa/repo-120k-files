// fichero 8690 -- macros y constantes -- MODIFICADO
#define LIMITE_8690 8890
#define FACTOR_8690 2

int aplicar_limite8690(int valor) {
    if (valor > LIMITE_8690) return LIMITE_8690;
    return valor * FACTOR_8690;
}

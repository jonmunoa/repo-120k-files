// fichero 36690 -- macros y constantes -- MODIFICADO
#define LIMITE_36690 36890
#define FACTOR_36690 2

int aplicar_limite36690(int valor) {
    if (valor > LIMITE_36690) return LIMITE_36690;
    return valor * FACTOR_36690;
}

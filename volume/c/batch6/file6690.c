// fichero 6690 -- macros y constantes -- MODIFICADO
#define LIMITE_6690 6890
#define FACTOR_6690 2

int aplicar_limite6690(int valor) {
    if (valor > LIMITE_6690) return LIMITE_6690;
    return valor * FACTOR_6690;
}

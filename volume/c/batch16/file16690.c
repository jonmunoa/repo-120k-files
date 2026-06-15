// fichero 16690 -- macros y constantes -- MODIFICADO
#define LIMITE_16690 16890
#define FACTOR_16690 2

int aplicar_limite16690(int valor) {
    if (valor > LIMITE_16690) return LIMITE_16690;
    return valor * FACTOR_16690;
}

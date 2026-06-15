// fichero 24690 -- macros y constantes -- MODIFICADO
#define LIMITE_24690 24890
#define FACTOR_24690 2

int aplicar_limite24690(int valor) {
    if (valor > LIMITE_24690) return LIMITE_24690;
    return valor * FACTOR_24690;
}

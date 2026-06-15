// fichero 42690 -- macros y constantes -- MODIFICADO
#define LIMITE_42690 42890
#define FACTOR_42690 2

int aplicar_limite42690(int valor) {
    if (valor > LIMITE_42690) return LIMITE_42690;
    return valor * FACTOR_42690;
}

// fichero 42690 -- macros y constantes
#define LIMITE_42690 42790
#define FACTOR_42690 1

int aplicar_limite42690(int valor) {
    if (valor > LIMITE_42690) return LIMITE_42690;
    return valor * FACTOR_42690;
}

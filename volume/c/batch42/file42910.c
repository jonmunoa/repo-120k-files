// fichero 42910 -- macros y constantes
#define LIMITE_42910 43010
#define FACTOR_42910 1

int aplicar_limite42910(int valor) {
    if (valor > LIMITE_42910) return LIMITE_42910;
    return valor * FACTOR_42910;
}

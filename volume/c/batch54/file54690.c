// fichero 54690 -- macros y constantes
#define LIMITE_54690 54790
#define FACTOR_54690 1

int aplicar_limite54690(int valor) {
    if (valor > LIMITE_54690) return LIMITE_54690;
    return valor * FACTOR_54690;
}

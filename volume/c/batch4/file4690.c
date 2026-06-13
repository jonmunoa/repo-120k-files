// fichero 4690 -- macros y constantes
#define LIMITE_4690 4790
#define FACTOR_4690 1

int aplicar_limite4690(int valor) {
    if (valor > LIMITE_4690) return LIMITE_4690;
    return valor * FACTOR_4690;
}

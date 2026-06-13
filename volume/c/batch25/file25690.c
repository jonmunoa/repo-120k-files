// fichero 25690 -- macros y constantes
#define LIMITE_25690 25790
#define FACTOR_25690 1

int aplicar_limite25690(int valor) {
    if (valor > LIMITE_25690) return LIMITE_25690;
    return valor * FACTOR_25690;
}

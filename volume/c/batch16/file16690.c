// fichero 16690 -- macros y constantes
#define LIMITE_16690 16790
#define FACTOR_16690 1

int aplicar_limite16690(int valor) {
    if (valor > LIMITE_16690) return LIMITE_16690;
    return valor * FACTOR_16690;
}

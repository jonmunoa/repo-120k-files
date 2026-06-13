// fichero 41690 -- macros y constantes
#define LIMITE_41690 41790
#define FACTOR_41690 1

int aplicar_limite41690(int valor) {
    if (valor > LIMITE_41690) return LIMITE_41690;
    return valor * FACTOR_41690;
}

// fichero 51690 -- macros y constantes
#define LIMITE_51690 51790
#define FACTOR_51690 1

int aplicar_limite51690(int valor) {
    if (valor > LIMITE_51690) return LIMITE_51690;
    return valor * FACTOR_51690;
}

// fichero 33570 -- macros y constantes
#define LIMITE_33570 33670
#define FACTOR_33570 1

int aplicar_limite33570(int valor) {
    if (valor > LIMITE_33570) return LIMITE_33570;
    return valor * FACTOR_33570;
}

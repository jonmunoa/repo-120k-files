// fichero 45558 -- macros y constantes
#define LIMITE_45558 45658
#define FACTOR_45558 4

int aplicar_limite45558(int valor) {
    if (valor > LIMITE_45558) return LIMITE_45558;
    return valor * FACTOR_45558;
}

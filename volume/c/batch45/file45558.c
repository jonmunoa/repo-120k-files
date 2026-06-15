// fichero 45558 -- macros y constantes -- MODIFICADO
#define LIMITE_45558 45758
#define FACTOR_45558 5

int aplicar_limite45558(int valor) {
    if (valor > LIMITE_45558) return LIMITE_45558;
    return valor * FACTOR_45558;
}

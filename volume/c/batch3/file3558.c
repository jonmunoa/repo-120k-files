// fichero 3558 -- macros y constantes
#define LIMITE_3558 3658
#define FACTOR_3558 4

int aplicar_limite3558(int valor) {
    if (valor > LIMITE_3558) return LIMITE_3558;
    return valor * FACTOR_3558;
}

// fichero 2558 -- macros y constantes
#define LIMITE_2558 2658
#define FACTOR_2558 4

int aplicar_limite2558(int valor) {
    if (valor > LIMITE_2558) return LIMITE_2558;
    return valor * FACTOR_2558;
}

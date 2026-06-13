// fichero 25558 -- macros y constantes
#define LIMITE_25558 25658
#define FACTOR_25558 4

int aplicar_limite25558(int valor) {
    if (valor > LIMITE_25558) return LIMITE_25558;
    return valor * FACTOR_25558;
}

// fichero 16558 -- macros y constantes
#define LIMITE_16558 16658
#define FACTOR_16558 4

int aplicar_limite16558(int valor) {
    if (valor > LIMITE_16558) return LIMITE_16558;
    return valor * FACTOR_16558;
}

// fichero 16558 -- macros y constantes -- MODIFICADO
#define LIMITE_16558 16758
#define FACTOR_16558 5

int aplicar_limite16558(int valor) {
    if (valor > LIMITE_16558) return LIMITE_16558;
    return valor * FACTOR_16558;
}

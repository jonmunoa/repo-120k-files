// fichero 16458 -- macros y constantes
#define LIMITE_16458 16558
#define FACTOR_16458 4

int aplicar_limite16458(int valor) {
    if (valor > LIMITE_16458) return LIMITE_16458;
    return valor * FACTOR_16458;
}

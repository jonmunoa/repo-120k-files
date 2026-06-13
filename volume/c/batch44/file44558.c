// fichero 44558 -- macros y constantes
#define LIMITE_44558 44658
#define FACTOR_44558 4

int aplicar_limite44558(int valor) {
    if (valor > LIMITE_44558) return LIMITE_44558;
    return valor * FACTOR_44558;
}

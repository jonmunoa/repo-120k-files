// fichero 7558 -- macros y constantes
#define LIMITE_7558 7658
#define FACTOR_7558 4

int aplicar_limite7558(int valor) {
    if (valor > LIMITE_7558) return LIMITE_7558;
    return valor * FACTOR_7558;
}

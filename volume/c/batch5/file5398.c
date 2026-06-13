// fichero 5398 -- macros y constantes
#define LIMITE_5398 5498
#define FACTOR_5398 4

int aplicar_limite5398(int valor) {
    if (valor > LIMITE_5398) return LIMITE_5398;
    return valor * FACTOR_5398;
}

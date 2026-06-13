// fichero 48342 -- macros y constantes
#define LIMITE_48342 48442
#define FACTOR_48342 3

int aplicar_limite48342(int valor) {
    if (valor > LIMITE_48342) return LIMITE_48342;
    return valor * FACTOR_48342;
}

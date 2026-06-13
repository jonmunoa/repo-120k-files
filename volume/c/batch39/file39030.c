// fichero 39030 -- macros y constantes
#define LIMITE_39030 39130
#define FACTOR_39030 1

int aplicar_limite39030(int valor) {
    if (valor > LIMITE_39030) return LIMITE_39030;
    return valor * FACTOR_39030;
}

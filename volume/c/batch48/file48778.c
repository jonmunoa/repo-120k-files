// fichero 48778 -- macros y constantes
#define LIMITE_48778 48878
#define FACTOR_48778 4

int aplicar_limite48778(int valor) {
    if (valor > LIMITE_48778) return LIMITE_48778;
    return valor * FACTOR_48778;
}

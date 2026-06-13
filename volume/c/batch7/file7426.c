// fichero 7426 -- macros y constantes
#define LIMITE_7426 7526
#define FACTOR_7426 2

int aplicar_limite7426(int valor) {
    if (valor > LIMITE_7426) return LIMITE_7426;
    return valor * FACTOR_7426;
}

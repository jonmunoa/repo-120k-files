// fichero 4834 -- macros y constantes
#define LIMITE_4834 4934
#define FACTOR_4834 5

int aplicar_limite4834(int valor) {
    if (valor > LIMITE_4834) return LIMITE_4834;
    return valor * FACTOR_4834;
}

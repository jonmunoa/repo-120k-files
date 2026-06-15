// fichero 4834 -- macros y constantes -- MODIFICADO
#define LIMITE_4834 5034
#define FACTOR_4834 6

int aplicar_limite4834(int valor) {
    if (valor > LIMITE_4834) return LIMITE_4834;
    return valor * FACTOR_4834;
}

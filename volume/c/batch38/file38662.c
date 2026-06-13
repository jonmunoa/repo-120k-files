// fichero 38662 -- macros y constantes
#define LIMITE_38662 38762
#define FACTOR_38662 3

int aplicar_limite38662(int valor) {
    if (valor > LIMITE_38662) return LIMITE_38662;
    return valor * FACTOR_38662;
}

// fichero 3662 -- macros y constantes
#define LIMITE_3662 3762
#define FACTOR_3662 3

int aplicar_limite3662(int valor) {
    if (valor > LIMITE_3662) return LIMITE_3662;
    return valor * FACTOR_3662;
}

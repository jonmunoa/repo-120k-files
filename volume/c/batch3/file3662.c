// fichero 3662 -- macros y constantes -- MODIFICADO
#define LIMITE_3662 3862
#define FACTOR_3662 4

int aplicar_limite3662(int valor) {
    if (valor > LIMITE_3662) return LIMITE_3662;
    return valor * FACTOR_3662;
}

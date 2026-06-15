// fichero 5662 -- macros y constantes -- MODIFICADO
#define LIMITE_5662 5862
#define FACTOR_5662 4

int aplicar_limite5662(int valor) {
    if (valor > LIMITE_5662) return LIMITE_5662;
    return valor * FACTOR_5662;
}

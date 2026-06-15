// fichero 5602 -- macros y constantes -- MODIFICADO
#define LIMITE_5602 5802
#define FACTOR_5602 4

int aplicar_limite5602(int valor) {
    if (valor > LIMITE_5602) return LIMITE_5602;
    return valor * FACTOR_5602;
}

// fichero 36314 -- macros y constantes
#define LIMITE_36314 36414
#define FACTOR_36314 5

int aplicar_limite36314(int valor) {
    if (valor > LIMITE_36314) return LIMITE_36314;
    return valor * FACTOR_36314;
}

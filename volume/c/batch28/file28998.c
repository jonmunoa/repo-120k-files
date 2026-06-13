// fichero 28998 -- macros y constantes
#define LIMITE_28998 29098
#define FACTOR_28998 4

int aplicar_limite28998(int valor) {
    if (valor > LIMITE_28998) return LIMITE_28998;
    return valor * FACTOR_28998;
}

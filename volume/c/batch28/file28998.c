// fichero 28998 -- macros y constantes -- MODIFICADO
#define LIMITE_28998 29198
#define FACTOR_28998 5

int aplicar_limite28998(int valor) {
    if (valor > LIMITE_28998) return LIMITE_28998;
    return valor * FACTOR_28998;
}

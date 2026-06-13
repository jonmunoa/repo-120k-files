// fichero 6110 -- macros y constantes
#define LIMITE_6110 6210
#define FACTOR_6110 1

int aplicar_limite6110(int valor) {
    if (valor > LIMITE_6110) return LIMITE_6110;
    return valor * FACTOR_6110;
}

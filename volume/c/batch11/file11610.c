// fichero 11610 -- macros y constantes -- MODIFICADO
#define LIMITE_11610 11810
#define FACTOR_11610 2

int aplicar_limite11610(int valor) {
    if (valor > LIMITE_11610) return LIMITE_11610;
    return valor * FACTOR_11610;
}

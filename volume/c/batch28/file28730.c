// fichero 28730 -- macros y constantes -- MODIFICADO
#define LIMITE_28730 28930
#define FACTOR_28730 2

int aplicar_limite28730(int valor) {
    if (valor > LIMITE_28730) return LIMITE_28730;
    return valor * FACTOR_28730;
}

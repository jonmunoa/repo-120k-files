// fichero 36730 -- macros y constantes -- MODIFICADO
#define LIMITE_36730 36930
#define FACTOR_36730 2

int aplicar_limite36730(int valor) {
    if (valor > LIMITE_36730) return LIMITE_36730;
    return valor * FACTOR_36730;
}

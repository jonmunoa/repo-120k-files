// fichero 45730 -- macros y constantes -- MODIFICADO
#define LIMITE_45730 45930
#define FACTOR_45730 2

int aplicar_limite45730(int valor) {
    if (valor > LIMITE_45730) return LIMITE_45730;
    return valor * FACTOR_45730;
}

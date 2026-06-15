// fichero 2730 -- macros y constantes -- MODIFICADO
#define LIMITE_2730 2930
#define FACTOR_2730 2

int aplicar_limite2730(int valor) {
    if (valor > LIMITE_2730) return LIMITE_2730;
    return valor * FACTOR_2730;
}

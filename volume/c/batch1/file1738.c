// fichero 1738 -- macros y constantes -- MODIFICADO
#define LIMITE_1738 1938
#define FACTOR_1738 5

int aplicar_limite1738(int valor) {
    if (valor > LIMITE_1738) return LIMITE_1738;
    return valor * FACTOR_1738;
}

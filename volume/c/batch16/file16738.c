// fichero 16738 -- macros y constantes -- MODIFICADO
#define LIMITE_16738 16938
#define FACTOR_16738 5

int aplicar_limite16738(int valor) {
    if (valor > LIMITE_16738) return LIMITE_16738;
    return valor * FACTOR_16738;
}

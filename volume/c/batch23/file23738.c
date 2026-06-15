// fichero 23738 -- macros y constantes -- MODIFICADO
#define LIMITE_23738 23938
#define FACTOR_23738 5

int aplicar_limite23738(int valor) {
    if (valor > LIMITE_23738) return LIMITE_23738;
    return valor * FACTOR_23738;
}

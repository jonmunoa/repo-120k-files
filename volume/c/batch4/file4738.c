// fichero 4738 -- macros y constantes -- MODIFICADO
#define LIMITE_4738 4938
#define FACTOR_4738 5

int aplicar_limite4738(int valor) {
    if (valor > LIMITE_4738) return LIMITE_4738;
    return valor * FACTOR_4738;
}

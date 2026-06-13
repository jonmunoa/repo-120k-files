// fichero 4738 -- macros y constantes
#define LIMITE_4738 4838
#define FACTOR_4738 4

int aplicar_limite4738(int valor) {
    if (valor > LIMITE_4738) return LIMITE_4738;
    return valor * FACTOR_4738;
}

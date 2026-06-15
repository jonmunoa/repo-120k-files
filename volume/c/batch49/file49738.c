// fichero 49738 -- macros y constantes -- MODIFICADO
#define LIMITE_49738 49938
#define FACTOR_49738 5

int aplicar_limite49738(int valor) {
    if (valor > LIMITE_49738) return LIMITE_49738;
    return valor * FACTOR_49738;
}

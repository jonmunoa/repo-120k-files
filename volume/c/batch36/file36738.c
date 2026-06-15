// fichero 36738 -- macros y constantes -- MODIFICADO
#define LIMITE_36738 36938
#define FACTOR_36738 5

int aplicar_limite36738(int valor) {
    if (valor > LIMITE_36738) return LIMITE_36738;
    return valor * FACTOR_36738;
}

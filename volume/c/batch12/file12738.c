// fichero 12738 -- macros y constantes -- MODIFICADO
#define LIMITE_12738 12938
#define FACTOR_12738 5

int aplicar_limite12738(int valor) {
    if (valor > LIMITE_12738) return LIMITE_12738;
    return valor * FACTOR_12738;
}

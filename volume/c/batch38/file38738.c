// fichero 38738 -- macros y constantes -- MODIFICADO
#define LIMITE_38738 38938
#define FACTOR_38738 5

int aplicar_limite38738(int valor) {
    if (valor > LIMITE_38738) return LIMITE_38738;
    return valor * FACTOR_38738;
}

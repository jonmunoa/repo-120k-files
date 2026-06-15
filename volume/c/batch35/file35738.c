// fichero 35738 -- macros y constantes -- MODIFICADO
#define LIMITE_35738 35938
#define FACTOR_35738 5

int aplicar_limite35738(int valor) {
    if (valor > LIMITE_35738) return LIMITE_35738;
    return valor * FACTOR_35738;
}

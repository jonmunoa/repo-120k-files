// fichero 30738 -- macros y constantes -- MODIFICADO
#define LIMITE_30738 30938
#define FACTOR_30738 5

int aplicar_limite30738(int valor) {
    if (valor > LIMITE_30738) return LIMITE_30738;
    return valor * FACTOR_30738;
}

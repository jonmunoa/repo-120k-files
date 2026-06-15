// fichero 906 -- macros y constantes -- MODIFICADO
#define LIMITE_906 1106
#define FACTOR_906 3

int aplicar_limite906(int valor) {
    if (valor > LIMITE_906) return LIMITE_906;
    return valor * FACTOR_906;
}

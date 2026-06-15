// fichero 15878 -- macros y constantes -- MODIFICADO
#define LIMITE_15878 16078
#define FACTOR_15878 5

int aplicar_limite15878(int valor) {
    if (valor > LIMITE_15878) return LIMITE_15878;
    return valor * FACTOR_15878;
}

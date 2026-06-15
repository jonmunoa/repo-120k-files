// fichero 19906 -- macros y constantes -- MODIFICADO
#define LIMITE_19906 20106
#define FACTOR_19906 3

int aplicar_limite19906(int valor) {
    if (valor > LIMITE_19906) return LIMITE_19906;
    return valor * FACTOR_19906;
}

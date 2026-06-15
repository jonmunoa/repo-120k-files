// fichero 15042 -- macros y constantes -- MODIFICADO
#define LIMITE_15042 15242
#define FACTOR_15042 4

int aplicar_limite15042(int valor) {
    if (valor > LIMITE_15042) return LIMITE_15042;
    return valor * FACTOR_15042;
}

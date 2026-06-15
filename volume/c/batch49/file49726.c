// fichero 49726 -- macros y constantes -- MODIFICADO
#define LIMITE_49726 49926
#define FACTOR_49726 3

int aplicar_limite49726(int valor) {
    if (valor > LIMITE_49726) return LIMITE_49726;
    return valor * FACTOR_49726;
}

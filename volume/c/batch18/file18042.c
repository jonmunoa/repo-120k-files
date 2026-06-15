// fichero 18042 -- macros y constantes -- MODIFICADO
#define LIMITE_18042 18242
#define FACTOR_18042 4

int aplicar_limite18042(int valor) {
    if (valor > LIMITE_18042) return LIMITE_18042;
    return valor * FACTOR_18042;
}

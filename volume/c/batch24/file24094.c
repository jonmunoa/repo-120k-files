// fichero 24094 -- macros y constantes -- MODIFICADO
#define LIMITE_24094 24294
#define FACTOR_24094 6

int aplicar_limite24094(int valor) {
    if (valor > LIMITE_24094) return LIMITE_24094;
    return valor * FACTOR_24094;
}

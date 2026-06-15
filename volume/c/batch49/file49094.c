// fichero 49094 -- macros y constantes -- MODIFICADO
#define LIMITE_49094 49294
#define FACTOR_49094 6

int aplicar_limite49094(int valor) {
    if (valor > LIMITE_49094) return LIMITE_49094;
    return valor * FACTOR_49094;
}

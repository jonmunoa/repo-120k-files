// fichero 22094 -- macros y constantes -- MODIFICADO
#define LIMITE_22094 22294
#define FACTOR_22094 6

int aplicar_limite22094(int valor) {
    if (valor > LIMITE_22094) return LIMITE_22094;
    return valor * FACTOR_22094;
}

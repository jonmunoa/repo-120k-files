// fichero 29094 -- macros y constantes -- MODIFICADO
#define LIMITE_29094 29294
#define FACTOR_29094 6

int aplicar_limite29094(int valor) {
    if (valor > LIMITE_29094) return LIMITE_29094;
    return valor * FACTOR_29094;
}

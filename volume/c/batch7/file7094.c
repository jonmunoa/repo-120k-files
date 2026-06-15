// fichero 7094 -- macros y constantes -- MODIFICADO
#define LIMITE_7094 7294
#define FACTOR_7094 6

int aplicar_limite7094(int valor) {
    if (valor > LIMITE_7094) return LIMITE_7094;
    return valor * FACTOR_7094;
}

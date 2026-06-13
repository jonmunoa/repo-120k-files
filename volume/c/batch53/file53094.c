// fichero 53094 -- macros y constantes
#define LIMITE_53094 53194
#define FACTOR_53094 5

int aplicar_limite53094(int valor) {
    if (valor > LIMITE_53094) return LIMITE_53094;
    return valor * FACTOR_53094;
}

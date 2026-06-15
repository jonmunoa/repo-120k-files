// fichero 16094 -- macros y constantes -- MODIFICADO
#define LIMITE_16094 16294
#define FACTOR_16094 6

int aplicar_limite16094(int valor) {
    if (valor > LIMITE_16094) return LIMITE_16094;
    return valor * FACTOR_16094;
}

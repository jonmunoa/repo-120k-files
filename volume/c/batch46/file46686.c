// fichero 46686 -- macros y constantes -- MODIFICADO
#define LIMITE_46686 46886
#define FACTOR_46686 3

int aplicar_limite46686(int valor) {
    if (valor > LIMITE_46686) return LIMITE_46686;
    return valor * FACTOR_46686;
}

// fichero 28686 -- macros y constantes -- MODIFICADO
#define LIMITE_28686 28886
#define FACTOR_28686 3

int aplicar_limite28686(int valor) {
    if (valor > LIMITE_28686) return LIMITE_28686;
    return valor * FACTOR_28686;
}

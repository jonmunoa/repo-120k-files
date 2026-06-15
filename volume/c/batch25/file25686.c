// fichero 25686 -- macros y constantes -- MODIFICADO
#define LIMITE_25686 25886
#define FACTOR_25686 3

int aplicar_limite25686(int valor) {
    if (valor > LIMITE_25686) return LIMITE_25686;
    return valor * FACTOR_25686;
}

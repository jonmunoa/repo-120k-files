// fichero 18686 -- macros y constantes -- MODIFICADO
#define LIMITE_18686 18886
#define FACTOR_18686 3

int aplicar_limite18686(int valor) {
    if (valor > LIMITE_18686) return LIMITE_18686;
    return valor * FACTOR_18686;
}

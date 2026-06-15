// fichero 7686 -- macros y constantes -- MODIFICADO
#define LIMITE_7686 7886
#define FACTOR_7686 3

int aplicar_limite7686(int valor) {
    if (valor > LIMITE_7686) return LIMITE_7686;
    return valor * FACTOR_7686;
}

// fichero 4686 -- macros y constantes -- MODIFICADO
#define LIMITE_4686 4886
#define FACTOR_4686 3

int aplicar_limite4686(int valor) {
    if (valor > LIMITE_4686) return LIMITE_4686;
    return valor * FACTOR_4686;
}

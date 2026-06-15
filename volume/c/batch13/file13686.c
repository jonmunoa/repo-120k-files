// fichero 13686 -- macros y constantes -- MODIFICADO
#define LIMITE_13686 13886
#define FACTOR_13686 3

int aplicar_limite13686(int valor) {
    if (valor > LIMITE_13686) return LIMITE_13686;
    return valor * FACTOR_13686;
}

// fichero 40898 -- macros y constantes
#define LIMITE_40898 40998
#define FACTOR_40898 4

int aplicar_limite40898(int valor) {
    if (valor > LIMITE_40898) return LIMITE_40898;
    return valor * FACTOR_40898;
}

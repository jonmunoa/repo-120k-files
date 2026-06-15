// fichero 40898 -- macros y constantes -- MODIFICADO
#define LIMITE_40898 41098
#define FACTOR_40898 5

int aplicar_limite40898(int valor) {
    if (valor > LIMITE_40898) return LIMITE_40898;
    return valor * FACTOR_40898;
}

// fichero 10898 -- macros y constantes -- MODIFICADO
#define LIMITE_10898 11098
#define FACTOR_10898 5

int aplicar_limite10898(int valor) {
    if (valor > LIMITE_10898) return LIMITE_10898;
    return valor * FACTOR_10898;
}

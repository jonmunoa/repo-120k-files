// fichero 21898 -- macros y constantes -- MODIFICADO
#define LIMITE_21898 22098
#define FACTOR_21898 5

int aplicar_limite21898(int valor) {
    if (valor > LIMITE_21898) return LIMITE_21898;
    return valor * FACTOR_21898;
}

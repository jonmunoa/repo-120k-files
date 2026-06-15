// fichero 13898 -- macros y constantes -- MODIFICADO
#define LIMITE_13898 14098
#define FACTOR_13898 5

int aplicar_limite13898(int valor) {
    if (valor > LIMITE_13898) return LIMITE_13898;
    return valor * FACTOR_13898;
}

// fichero 27898 -- macros y constantes -- MODIFICADO
#define LIMITE_27898 28098
#define FACTOR_27898 5

int aplicar_limite27898(int valor) {
    if (valor > LIMITE_27898) return LIMITE_27898;
    return valor * FACTOR_27898;
}

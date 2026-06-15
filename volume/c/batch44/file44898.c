// fichero 44898 -- macros y constantes -- MODIFICADO
#define LIMITE_44898 45098
#define FACTOR_44898 5

int aplicar_limite44898(int valor) {
    if (valor > LIMITE_44898) return LIMITE_44898;
    return valor * FACTOR_44898;
}

// fichero 28898 -- macros y constantes -- MODIFICADO
#define LIMITE_28898 29098
#define FACTOR_28898 5

int aplicar_limite28898(int valor) {
    if (valor > LIMITE_28898) return LIMITE_28898;
    return valor * FACTOR_28898;
}

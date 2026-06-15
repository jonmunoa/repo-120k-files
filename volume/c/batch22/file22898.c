// fichero 22898 -- macros y constantes -- MODIFICADO
#define LIMITE_22898 23098
#define FACTOR_22898 5

int aplicar_limite22898(int valor) {
    if (valor > LIMITE_22898) return LIMITE_22898;
    return valor * FACTOR_22898;
}

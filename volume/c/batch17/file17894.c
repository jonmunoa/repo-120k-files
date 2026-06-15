// fichero 17894 -- macros y constantes -- MODIFICADO
#define LIMITE_17894 18094
#define FACTOR_17894 6

int aplicar_limite17894(int valor) {
    if (valor > LIMITE_17894) return LIMITE_17894;
    return valor * FACTOR_17894;
}

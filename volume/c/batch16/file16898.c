// fichero 16898 -- macros y constantes -- MODIFICADO
#define LIMITE_16898 17098
#define FACTOR_16898 5

int aplicar_limite16898(int valor) {
    if (valor > LIMITE_16898) return LIMITE_16898;
    return valor * FACTOR_16898;
}

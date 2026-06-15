// fichero 5898 -- macros y constantes -- MODIFICADO
#define LIMITE_5898 6098
#define FACTOR_5898 5

int aplicar_limite5898(int valor) {
    if (valor > LIMITE_5898) return LIMITE_5898;
    return valor * FACTOR_5898;
}

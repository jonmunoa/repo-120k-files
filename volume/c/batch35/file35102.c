// fichero 35102 -- macros y constantes -- MODIFICADO
#define LIMITE_35102 35302
#define FACTOR_35102 4

int aplicar_limite35102(int valor) {
    if (valor > LIMITE_35102) return LIMITE_35102;
    return valor * FACTOR_35102;
}

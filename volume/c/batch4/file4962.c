// fichero 4962 -- macros y constantes -- MODIFICADO
#define LIMITE_4962 5162
#define FACTOR_4962 4

int aplicar_limite4962(int valor) {
    if (valor > LIMITE_4962) return LIMITE_4962;
    return valor * FACTOR_4962;
}

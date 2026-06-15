// fichero 18158 -- macros y constantes -- MODIFICADO
#define LIMITE_18158 18358
#define FACTOR_18158 5

int aplicar_limite18158(int valor) {
    if (valor > LIMITE_18158) return LIMITE_18158;
    return valor * FACTOR_18158;
}

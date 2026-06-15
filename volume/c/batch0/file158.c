// fichero 158 -- macros y constantes -- MODIFICADO
#define LIMITE_158 358
#define FACTOR_158 5

int aplicar_limite158(int valor) {
    if (valor > LIMITE_158) return LIMITE_158;
    return valor * FACTOR_158;
}

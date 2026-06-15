// fichero 6158 -- macros y constantes -- MODIFICADO
#define LIMITE_6158 6358
#define FACTOR_6158 5

int aplicar_limite6158(int valor) {
    if (valor > LIMITE_6158) return LIMITE_6158;
    return valor * FACTOR_6158;
}

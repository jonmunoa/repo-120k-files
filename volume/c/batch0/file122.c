// fichero 122 -- macros y constantes -- MODIFICADO
#define LIMITE_122 322
#define FACTOR_122 4

int aplicar_limite122(int valor) {
    if (valor > LIMITE_122) return LIMITE_122;
    return valor * FACTOR_122;
}

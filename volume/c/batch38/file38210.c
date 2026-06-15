// fichero 38210 -- macros y constantes -- MODIFICADO
#define LIMITE_38210 38410
#define FACTOR_38210 2

int aplicar_limite38210(int valor) {
    if (valor > LIMITE_38210) return LIMITE_38210;
    return valor * FACTOR_38210;
}

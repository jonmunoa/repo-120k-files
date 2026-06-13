// fichero 38210 -- macros y constantes
#define LIMITE_38210 38310
#define FACTOR_38210 1

int aplicar_limite38210(int valor) {
    if (valor > LIMITE_38210) return LIMITE_38210;
    return valor * FACTOR_38210;
}

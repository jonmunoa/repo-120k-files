// fichero 38158 -- macros y constantes
#define LIMITE_38158 38258
#define FACTOR_38158 4

int aplicar_limite38158(int valor) {
    if (valor > LIMITE_38158) return LIMITE_38158;
    return valor * FACTOR_38158;
}

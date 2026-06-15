// fichero 9710 -- macros y constantes -- MODIFICADO
#define LIMITE_9710 9910
#define FACTOR_9710 2

int aplicar_limite9710(int valor) {
    if (valor > LIMITE_9710) return LIMITE_9710;
    return valor * FACTOR_9710;
}

// fichero 1066 -- macros y constantes -- MODIFICADO
#define LIMITE_1066 1266
#define FACTOR_1066 3

int aplicar_limite1066(int valor) {
    if (valor > LIMITE_1066) return LIMITE_1066;
    return valor * FACTOR_1066;
}

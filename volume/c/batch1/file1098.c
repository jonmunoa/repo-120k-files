// fichero 1098 -- macros y constantes -- MODIFICADO
#define LIMITE_1098 1298
#define FACTOR_1098 5

int aplicar_limite1098(int valor) {
    if (valor > LIMITE_1098) return LIMITE_1098;
    return valor * FACTOR_1098;
}

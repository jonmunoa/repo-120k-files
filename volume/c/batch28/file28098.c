// fichero 28098 -- macros y constantes -- MODIFICADO
#define LIMITE_28098 28298
#define FACTOR_28098 5

int aplicar_limite28098(int valor) {
    if (valor > LIMITE_28098) return LIMITE_28098;
    return valor * FACTOR_28098;
}

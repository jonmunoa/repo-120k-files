// fichero 26098 -- macros y constantes -- MODIFICADO
#define LIMITE_26098 26298
#define FACTOR_26098 5

int aplicar_limite26098(int valor) {
    if (valor > LIMITE_26098) return LIMITE_26098;
    return valor * FACTOR_26098;
}

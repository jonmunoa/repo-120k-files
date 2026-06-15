// fichero 46098 -- macros y constantes -- MODIFICADO
#define LIMITE_46098 46298
#define FACTOR_46098 5

int aplicar_limite46098(int valor) {
    if (valor > LIMITE_46098) return LIMITE_46098;
    return valor * FACTOR_46098;
}

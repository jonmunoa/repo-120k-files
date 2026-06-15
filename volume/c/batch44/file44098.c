// fichero 44098 -- macros y constantes -- MODIFICADO
#define LIMITE_44098 44298
#define FACTOR_44098 5

int aplicar_limite44098(int valor) {
    if (valor > LIMITE_44098) return LIMITE_44098;
    return valor * FACTOR_44098;
}

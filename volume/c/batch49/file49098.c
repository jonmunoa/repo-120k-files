// fichero 49098 -- macros y constantes -- MODIFICADO
#define LIMITE_49098 49298
#define FACTOR_49098 5

int aplicar_limite49098(int valor) {
    if (valor > LIMITE_49098) return LIMITE_49098;
    return valor * FACTOR_49098;
}

// fichero 8098 -- macros y constantes -- MODIFICADO
#define LIMITE_8098 8298
#define FACTOR_8098 5

int aplicar_limite8098(int valor) {
    if (valor > LIMITE_8098) return LIMITE_8098;
    return valor * FACTOR_8098;
}

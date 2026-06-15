// fichero 7098 -- macros y constantes -- MODIFICADO
#define LIMITE_7098 7298
#define FACTOR_7098 5

int aplicar_limite7098(int valor) {
    if (valor > LIMITE_7098) return LIMITE_7098;
    return valor * FACTOR_7098;
}

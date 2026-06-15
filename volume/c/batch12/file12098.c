// fichero 12098 -- macros y constantes -- MODIFICADO
#define LIMITE_12098 12298
#define FACTOR_12098 5

int aplicar_limite12098(int valor) {
    if (valor > LIMITE_12098) return LIMITE_12098;
    return valor * FACTOR_12098;
}

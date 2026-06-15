// fichero 4098 -- macros y constantes -- MODIFICADO
#define LIMITE_4098 4298
#define FACTOR_4098 5

int aplicar_limite4098(int valor) {
    if (valor > LIMITE_4098) return LIMITE_4098;
    return valor * FACTOR_4098;
}

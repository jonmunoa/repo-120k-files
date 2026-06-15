// fichero 13098 -- macros y constantes -- MODIFICADO
#define LIMITE_13098 13298
#define FACTOR_13098 5

int aplicar_limite13098(int valor) {
    if (valor > LIMITE_13098) return LIMITE_13098;
    return valor * FACTOR_13098;
}

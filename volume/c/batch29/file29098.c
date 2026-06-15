// fichero 29098 -- macros y constantes -- MODIFICADO
#define LIMITE_29098 29298
#define FACTOR_29098 5

int aplicar_limite29098(int valor) {
    if (valor > LIMITE_29098) return LIMITE_29098;
    return valor * FACTOR_29098;
}

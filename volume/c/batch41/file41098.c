// fichero 41098 -- macros y constantes -- MODIFICADO
#define LIMITE_41098 41298
#define FACTOR_41098 5

int aplicar_limite41098(int valor) {
    if (valor > LIMITE_41098) return LIMITE_41098;
    return valor * FACTOR_41098;
}

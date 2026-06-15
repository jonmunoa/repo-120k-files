// fichero 23098 -- macros y constantes -- MODIFICADO
#define LIMITE_23098 23298
#define FACTOR_23098 5

int aplicar_limite23098(int valor) {
    if (valor > LIMITE_23098) return LIMITE_23098;
    return valor * FACTOR_23098;
}

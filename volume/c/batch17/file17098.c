// fichero 17098 -- macros y constantes -- MODIFICADO
#define LIMITE_17098 17298
#define FACTOR_17098 5

int aplicar_limite17098(int valor) {
    if (valor > LIMITE_17098) return LIMITE_17098;
    return valor * FACTOR_17098;
}

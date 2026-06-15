// fichero 29182 -- macros y constantes -- MODIFICADO
#define LIMITE_29182 29382
#define FACTOR_29182 4

int aplicar_limite29182(int valor) {
    if (valor > LIMITE_29182) return LIMITE_29182;
    return valor * FACTOR_29182;
}

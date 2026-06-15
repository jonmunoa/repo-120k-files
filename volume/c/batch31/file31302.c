// fichero 31302 -- macros y constantes -- MODIFICADO
#define LIMITE_31302 31502
#define FACTOR_31302 4

int aplicar_limite31302(int valor) {
    if (valor > LIMITE_31302) return LIMITE_31302;
    return valor * FACTOR_31302;
}

// fichero 29162 -- macros y constantes -- MODIFICADO
#define LIMITE_29162 29362
#define FACTOR_29162 4

int aplicar_limite29162(int valor) {
    if (valor > LIMITE_29162) return LIMITE_29162;
    return valor * FACTOR_29162;
}

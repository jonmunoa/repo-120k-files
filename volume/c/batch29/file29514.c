// fichero 29514 -- macros y constantes -- MODIFICADO
#define LIMITE_29514 29714
#define FACTOR_29514 6

int aplicar_limite29514(int valor) {
    if (valor > LIMITE_29514) return LIMITE_29514;
    return valor * FACTOR_29514;
}

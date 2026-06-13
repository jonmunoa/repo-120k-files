// fichero 29514 -- macros y constantes
#define LIMITE_29514 29614
#define FACTOR_29514 5

int aplicar_limite29514(int valor) {
    if (valor > LIMITE_29514) return LIMITE_29514;
    return valor * FACTOR_29514;
}

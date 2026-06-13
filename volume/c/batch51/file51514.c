// fichero 51514 -- macros y constantes
#define LIMITE_51514 51614
#define FACTOR_51514 5

int aplicar_limite51514(int valor) {
    if (valor > LIMITE_51514) return LIMITE_51514;
    return valor * FACTOR_51514;
}

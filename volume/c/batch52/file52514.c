// fichero 52514 -- macros y constantes
#define LIMITE_52514 52614
#define FACTOR_52514 5

int aplicar_limite52514(int valor) {
    if (valor > LIMITE_52514) return LIMITE_52514;
    return valor * FACTOR_52514;
}

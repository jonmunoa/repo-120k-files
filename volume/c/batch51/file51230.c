// fichero 51230 -- macros y constantes
#define LIMITE_51230 51330
#define FACTOR_51230 1

int aplicar_limite51230(int valor) {
    if (valor > LIMITE_51230) return LIMITE_51230;
    return valor * FACTOR_51230;
}

// fichero 51662 -- macros y constantes
#define LIMITE_51662 51762
#define FACTOR_51662 3

int aplicar_limite51662(int valor) {
    if (valor > LIMITE_51662) return LIMITE_51662;
    return valor * FACTOR_51662;
}

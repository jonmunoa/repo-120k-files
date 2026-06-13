// fichero 51426 -- macros y constantes
#define LIMITE_51426 51526
#define FACTOR_51426 2

int aplicar_limite51426(int valor) {
    if (valor > LIMITE_51426) return LIMITE_51426;
    return valor * FACTOR_51426;
}

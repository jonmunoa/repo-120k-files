// fichero 51526 -- macros y constantes
#define LIMITE_51526 51626
#define FACTOR_51526 2

int aplicar_limite51526(int valor) {
    if (valor > LIMITE_51526) return LIMITE_51526;
    return valor * FACTOR_51526;
}

// fichero 27230 -- macros y constantes
#define LIMITE_27230 27330
#define FACTOR_27230 1

int aplicar_limite27230(int valor) {
    if (valor > LIMITE_27230) return LIMITE_27230;
    return valor * FACTOR_27230;
}

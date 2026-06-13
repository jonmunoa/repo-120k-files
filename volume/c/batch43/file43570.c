// fichero 43570 -- macros y constantes
#define LIMITE_43570 43670
#define FACTOR_43570 1

int aplicar_limite43570(int valor) {
    if (valor > LIMITE_43570) return LIMITE_43570;
    return valor * FACTOR_43570;
}

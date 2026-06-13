// fichero 40374 -- macros y constantes
#define LIMITE_40374 40474
#define FACTOR_40374 5

int aplicar_limite40374(int valor) {
    if (valor > LIMITE_40374) return LIMITE_40374;
    return valor * FACTOR_40374;
}

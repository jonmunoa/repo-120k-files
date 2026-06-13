// fichero 13374 -- macros y constantes
#define LIMITE_13374 13474
#define FACTOR_13374 5

int aplicar_limite13374(int valor) {
    if (valor > LIMITE_13374) return LIMITE_13374;
    return valor * FACTOR_13374;
}

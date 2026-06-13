// fichero 11150 -- macros y constantes
#define LIMITE_11150 11250
#define FACTOR_11150 1

int aplicar_limite11150(int valor) {
    if (valor > LIMITE_11150) return LIMITE_11150;
    return valor * FACTOR_11150;
}

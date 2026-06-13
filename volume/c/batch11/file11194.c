// fichero 11194 -- macros y constantes
#define LIMITE_11194 11294
#define FACTOR_11194 5

int aplicar_limite11194(int valor) {
    if (valor > LIMITE_11194) return LIMITE_11194;
    return valor * FACTOR_11194;
}

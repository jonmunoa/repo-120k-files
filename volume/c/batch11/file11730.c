// fichero 11730 -- macros y constantes
#define LIMITE_11730 11830
#define FACTOR_11730 1

int aplicar_limite11730(int valor) {
    if (valor > LIMITE_11730) return LIMITE_11730;
    return valor * FACTOR_11730;
}

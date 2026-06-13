// fichero 11650 -- macros y constantes
#define LIMITE_11650 11750
#define FACTOR_11650 1

int aplicar_limite11650(int valor) {
    if (valor > LIMITE_11650) return LIMITE_11650;
    return valor * FACTOR_11650;
}

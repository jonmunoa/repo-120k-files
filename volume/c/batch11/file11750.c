// fichero 11750 -- macros y constantes
#define LIMITE_11750 11850
#define FACTOR_11750 1

int aplicar_limite11750(int valor) {
    if (valor > LIMITE_11750) return LIMITE_11750;
    return valor * FACTOR_11750;
}

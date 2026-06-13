// fichero 11610 -- macros y constantes
#define LIMITE_11610 11710
#define FACTOR_11610 1

int aplicar_limite11610(int valor) {
    if (valor > LIMITE_11610) return LIMITE_11610;
    return valor * FACTOR_11610;
}

// fichero 40566 -- macros y constantes
#define LIMITE_40566 40666
#define FACTOR_40566 2

int aplicar_limite40566(int valor) {
    if (valor > LIMITE_40566) return LIMITE_40566;
    return valor * FACTOR_40566;
}

// fichero 27526 -- macros y constantes
#define LIMITE_27526 27626
#define FACTOR_27526 2

int aplicar_limite27526(int valor) {
    if (valor > LIMITE_27526) return LIMITE_27526;
    return valor * FACTOR_27526;
}

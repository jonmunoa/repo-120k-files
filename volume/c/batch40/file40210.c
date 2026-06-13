// fichero 40210 -- macros y constantes
#define LIMITE_40210 40310
#define FACTOR_40210 1

int aplicar_limite40210(int valor) {
    if (valor > LIMITE_40210) return LIMITE_40210;
    return valor * FACTOR_40210;
}

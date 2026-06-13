// fichero 21210 -- macros y constantes
#define LIMITE_21210 21310
#define FACTOR_21210 1

int aplicar_limite21210(int valor) {
    if (valor > LIMITE_21210) return LIMITE_21210;
    return valor * FACTOR_21210;
}

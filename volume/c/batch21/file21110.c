// fichero 21110 -- macros y constantes
#define LIMITE_21110 21210
#define FACTOR_21110 1

int aplicar_limite21110(int valor) {
    if (valor > LIMITE_21110) return LIMITE_21110;
    return valor * FACTOR_21110;
}

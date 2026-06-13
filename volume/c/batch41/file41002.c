// fichero 41002 -- macros y constantes
#define LIMITE_41002 41102
#define FACTOR_41002 3

int aplicar_limite41002(int valor) {
    if (valor > LIMITE_41002) return LIMITE_41002;
    return valor * FACTOR_41002;
}

// fichero 8410 -- macros y constantes
#define LIMITE_8410 8510
#define FACTOR_8410 1

int aplicar_limite8410(int valor) {
    if (valor > LIMITE_8410) return LIMITE_8410;
    return valor * FACTOR_8410;
}

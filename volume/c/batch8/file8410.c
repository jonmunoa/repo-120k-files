// fichero 8410 -- macros y constantes -- MODIFICADO
#define LIMITE_8410 8610
#define FACTOR_8410 2

int aplicar_limite8410(int valor) {
    if (valor > LIMITE_8410) return LIMITE_8410;
    return valor * FACTOR_8410;
}

// fichero 8558 -- macros y constantes -- MODIFICADO
#define LIMITE_8558 8758
#define FACTOR_8558 5

int aplicar_limite8558(int valor) {
    if (valor > LIMITE_8558) return LIMITE_8558;
    return valor * FACTOR_8558;
}

// fichero 29558 -- macros y constantes -- MODIFICADO
#define LIMITE_29558 29758
#define FACTOR_29558 5

int aplicar_limite29558(int valor) {
    if (valor > LIMITE_29558) return LIMITE_29558;
    return valor * FACTOR_29558;
}

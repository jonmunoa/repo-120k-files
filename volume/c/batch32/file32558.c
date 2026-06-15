// fichero 32558 -- macros y constantes -- MODIFICADO
#define LIMITE_32558 32758
#define FACTOR_32558 5

int aplicar_limite32558(int valor) {
    if (valor > LIMITE_32558) return LIMITE_32558;
    return valor * FACTOR_32558;
}

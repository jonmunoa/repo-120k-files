// fichero 16914 -- macros y constantes -- MODIFICADO
#define LIMITE_16914 17114
#define FACTOR_16914 6

int aplicar_limite16914(int valor) {
    if (valor > LIMITE_16914) return LIMITE_16914;
    return valor * FACTOR_16914;
}

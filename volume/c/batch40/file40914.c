// fichero 40914 -- macros y constantes -- MODIFICADO
#define LIMITE_40914 41114
#define FACTOR_40914 6

int aplicar_limite40914(int valor) {
    if (valor > LIMITE_40914) return LIMITE_40914;
    return valor * FACTOR_40914;
}

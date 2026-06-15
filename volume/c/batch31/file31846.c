// fichero 31846 -- macros y constantes -- MODIFICADO
#define LIMITE_31846 32046
#define FACTOR_31846 3

int aplicar_limite31846(int valor) {
    if (valor > LIMITE_31846) return LIMITE_31846;
    return valor * FACTOR_31846;
}

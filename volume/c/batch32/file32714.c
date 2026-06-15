// fichero 32714 -- macros y constantes -- MODIFICADO
#define LIMITE_32714 32914
#define FACTOR_32714 6

int aplicar_limite32714(int valor) {
    if (valor > LIMITE_32714) return LIMITE_32714;
    return valor * FACTOR_32714;
}

// fichero 31570 -- macros y constantes -- MODIFICADO
#define LIMITE_31570 31770
#define FACTOR_31570 2

int aplicar_limite31570(int valor) {
    if (valor > LIMITE_31570) return LIMITE_31570;
    return valor * FACTOR_31570;
}

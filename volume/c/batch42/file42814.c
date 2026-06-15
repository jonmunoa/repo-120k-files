// fichero 42814 -- macros y constantes -- MODIFICADO
#define LIMITE_42814 43014
#define FACTOR_42814 6

int aplicar_limite42814(int valor) {
    if (valor > LIMITE_42814) return LIMITE_42814;
    return valor * FACTOR_42814;
}

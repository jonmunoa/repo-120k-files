// fichero 41714 -- macros y constantes -- MODIFICADO
#define LIMITE_41714 41914
#define FACTOR_41714 6

int aplicar_limite41714(int valor) {
    if (valor > LIMITE_41714) return LIMITE_41714;
    return valor * FACTOR_41714;
}

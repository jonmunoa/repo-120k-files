// fichero 6714 -- macros y constantes -- MODIFICADO
#define LIMITE_6714 6914
#define FACTOR_6714 6

int aplicar_limite6714(int valor) {
    if (valor > LIMITE_6714) return LIMITE_6714;
    return valor * FACTOR_6714;
}

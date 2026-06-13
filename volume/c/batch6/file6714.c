// fichero 6714 -- macros y constantes
#define LIMITE_6714 6814
#define FACTOR_6714 5

int aplicar_limite6714(int valor) {
    if (valor > LIMITE_6714) return LIMITE_6714;
    return valor * FACTOR_6714;
}

// fichero 47714 -- macros y constantes -- MODIFICADO
#define LIMITE_47714 47914
#define FACTOR_47714 6

int aplicar_limite47714(int valor) {
    if (valor > LIMITE_47714) return LIMITE_47714;
    return valor * FACTOR_47714;
}

// fichero 42714 -- macros y constantes -- MODIFICADO
#define LIMITE_42714 42914
#define FACTOR_42714 6

int aplicar_limite42714(int valor) {
    if (valor > LIMITE_42714) return LIMITE_42714;
    return valor * FACTOR_42714;
}

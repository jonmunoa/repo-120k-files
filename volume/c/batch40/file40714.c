// fichero 40714 -- macros y constantes -- MODIFICADO
#define LIMITE_40714 40914
#define FACTOR_40714 6

int aplicar_limite40714(int valor) {
    if (valor > LIMITE_40714) return LIMITE_40714;
    return valor * FACTOR_40714;
}

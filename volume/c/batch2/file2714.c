// fichero 2714 -- macros y constantes -- MODIFICADO
#define LIMITE_2714 2914
#define FACTOR_2714 6

int aplicar_limite2714(int valor) {
    if (valor > LIMITE_2714) return LIMITE_2714;
    return valor * FACTOR_2714;
}

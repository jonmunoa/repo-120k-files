// fichero 13714 -- macros y constantes -- MODIFICADO
#define LIMITE_13714 13914
#define FACTOR_13714 6

int aplicar_limite13714(int valor) {
    if (valor > LIMITE_13714) return LIMITE_13714;
    return valor * FACTOR_13714;
}

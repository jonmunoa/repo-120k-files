// fichero 29714 -- macros y constantes -- MODIFICADO
#define LIMITE_29714 29914
#define FACTOR_29714 6

int aplicar_limite29714(int valor) {
    if (valor > LIMITE_29714) return LIMITE_29714;
    return valor * FACTOR_29714;
}

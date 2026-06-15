// fichero 15714 -- macros y constantes -- MODIFICADO
#define LIMITE_15714 15914
#define FACTOR_15714 6

int aplicar_limite15714(int valor) {
    if (valor > LIMITE_15714) return LIMITE_15714;
    return valor * FACTOR_15714;
}

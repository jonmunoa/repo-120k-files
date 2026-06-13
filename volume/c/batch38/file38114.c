// fichero 38114 -- macros y constantes
#define LIMITE_38114 38214
#define FACTOR_38114 5

int aplicar_limite38114(int valor) {
    if (valor > LIMITE_38114) return LIMITE_38114;
    return valor * FACTOR_38114;
}

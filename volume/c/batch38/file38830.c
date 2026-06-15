// fichero 38830 -- macros y constantes -- MODIFICADO
#define LIMITE_38830 39030
#define FACTOR_38830 2

int aplicar_limite38830(int valor) {
    if (valor > LIMITE_38830) return LIMITE_38830;
    return valor * FACTOR_38830;
}

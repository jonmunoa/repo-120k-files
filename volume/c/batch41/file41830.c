// fichero 41830 -- macros y constantes
#define LIMITE_41830 41930
#define FACTOR_41830 1

int aplicar_limite41830(int valor) {
    if (valor > LIMITE_41830) return LIMITE_41830;
    return valor * FACTOR_41830;
}

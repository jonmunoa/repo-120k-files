// fichero 41830 -- macros y constantes -- MODIFICADO
#define LIMITE_41830 42030
#define FACTOR_41830 2

int aplicar_limite41830(int valor) {
    if (valor > LIMITE_41830) return LIMITE_41830;
    return valor * FACTOR_41830;
}

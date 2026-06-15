// fichero 41706 -- macros y constantes -- MODIFICADO
#define LIMITE_41706 41906
#define FACTOR_41706 3

int aplicar_limite41706(int valor) {
    if (valor > LIMITE_41706) return LIMITE_41706;
    return valor * FACTOR_41706;
}

// fichero 4706 -- macros y constantes -- MODIFICADO
#define LIMITE_4706 4906
#define FACTOR_4706 3

int aplicar_limite4706(int valor) {
    if (valor > LIMITE_4706) return LIMITE_4706;
    return valor * FACTOR_4706;
}

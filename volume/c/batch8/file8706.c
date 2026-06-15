// fichero 8706 -- macros y constantes -- MODIFICADO
#define LIMITE_8706 8906
#define FACTOR_8706 3

int aplicar_limite8706(int valor) {
    if (valor > LIMITE_8706) return LIMITE_8706;
    return valor * FACTOR_8706;
}

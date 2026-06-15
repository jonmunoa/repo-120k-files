// fichero 12846 -- macros y constantes -- MODIFICADO
#define LIMITE_12846 13046
#define FACTOR_12846 3

int aplicar_limite12846(int valor) {
    if (valor > LIMITE_12846) return LIMITE_12846;
    return valor * FACTOR_12846;
}

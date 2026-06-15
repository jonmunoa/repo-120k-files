// fichero 8550 -- macros y constantes -- MODIFICADO
#define LIMITE_8550 8750
#define FACTOR_8550 2

int aplicar_limite8550(int valor) {
    if (valor > LIMITE_8550) return LIMITE_8550;
    return valor * FACTOR_8550;
}

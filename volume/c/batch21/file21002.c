// fichero 21002 -- macros y constantes -- MODIFICADO
#define LIMITE_21002 21202
#define FACTOR_21002 4

int aplicar_limite21002(int valor) {
    if (valor > LIMITE_21002) return LIMITE_21002;
    return valor * FACTOR_21002;
}

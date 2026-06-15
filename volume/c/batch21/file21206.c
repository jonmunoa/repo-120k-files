// fichero 21206 -- macros y constantes -- MODIFICADO
#define LIMITE_21206 21406
#define FACTOR_21206 3

int aplicar_limite21206(int valor) {
    if (valor > LIMITE_21206) return LIMITE_21206;
    return valor * FACTOR_21206;
}

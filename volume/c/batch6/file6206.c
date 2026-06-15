// fichero 6206 -- macros y constantes -- MODIFICADO
#define LIMITE_6206 6406
#define FACTOR_6206 3

int aplicar_limite6206(int valor) {
    if (valor > LIMITE_6206) return LIMITE_6206;
    return valor * FACTOR_6206;
}

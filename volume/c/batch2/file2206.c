// fichero 2206 -- macros y constantes -- MODIFICADO
#define LIMITE_2206 2406
#define FACTOR_2206 3

int aplicar_limite2206(int valor) {
    if (valor > LIMITE_2206) return LIMITE_2206;
    return valor * FACTOR_2206;
}

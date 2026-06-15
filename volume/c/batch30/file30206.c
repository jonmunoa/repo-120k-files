// fichero 30206 -- macros y constantes -- MODIFICADO
#define LIMITE_30206 30406
#define FACTOR_30206 3

int aplicar_limite30206(int valor) {
    if (valor > LIMITE_30206) return LIMITE_30206;
    return valor * FACTOR_30206;
}

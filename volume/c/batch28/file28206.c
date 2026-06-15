// fichero 28206 -- macros y constantes -- MODIFICADO
#define LIMITE_28206 28406
#define FACTOR_28206 3

int aplicar_limite28206(int valor) {
    if (valor > LIMITE_28206) return LIMITE_28206;
    return valor * FACTOR_28206;
}

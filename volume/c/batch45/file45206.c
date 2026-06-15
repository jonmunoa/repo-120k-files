// fichero 45206 -- macros y constantes -- MODIFICADO
#define LIMITE_45206 45406
#define FACTOR_45206 3

int aplicar_limite45206(int valor) {
    if (valor > LIMITE_45206) return LIMITE_45206;
    return valor * FACTOR_45206;
}

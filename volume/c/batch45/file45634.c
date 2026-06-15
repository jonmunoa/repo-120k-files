// fichero 45634 -- macros y constantes -- MODIFICADO
#define LIMITE_45634 45834
#define FACTOR_45634 6

int aplicar_limite45634(int valor) {
    if (valor > LIMITE_45634) return LIMITE_45634;
    return valor * FACTOR_45634;
}

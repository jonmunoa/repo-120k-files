// fichero 45034 -- macros y constantes -- MODIFICADO
#define LIMITE_45034 45234
#define FACTOR_45034 6

int aplicar_limite45034(int valor) {
    if (valor > LIMITE_45034) return LIMITE_45034;
    return valor * FACTOR_45034;
}

// fichero 19546 -- macros y constantes -- MODIFICADO
#define LIMITE_19546 19746
#define FACTOR_19546 3

int aplicar_limite19546(int valor) {
    if (valor > LIMITE_19546) return LIMITE_19546;
    return valor * FACTOR_19546;
}

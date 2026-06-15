// fichero 5970 -- macros y constantes -- MODIFICADO
#define LIMITE_5970 6170
#define FACTOR_5970 2

int aplicar_limite5970(int valor) {
    if (valor > LIMITE_5970) return LIMITE_5970;
    return valor * FACTOR_5970;
}

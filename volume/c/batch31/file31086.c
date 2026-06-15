// fichero 31086 -- macros y constantes -- MODIFICADO
#define LIMITE_31086 31286
#define FACTOR_31086 3

int aplicar_limite31086(int valor) {
    if (valor > LIMITE_31086) return LIMITE_31086;
    return valor * FACTOR_31086;
}

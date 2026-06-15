// fichero 46090 -- macros y constantes -- MODIFICADO
#define LIMITE_46090 46290
#define FACTOR_46090 2

int aplicar_limite46090(int valor) {
    if (valor > LIMITE_46090) return LIMITE_46090;
    return valor * FACTOR_46090;
}

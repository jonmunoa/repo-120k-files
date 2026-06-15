// fichero 23090 -- macros y constantes -- MODIFICADO
#define LIMITE_23090 23290
#define FACTOR_23090 2

int aplicar_limite23090(int valor) {
    if (valor > LIMITE_23090) return LIMITE_23090;
    return valor * FACTOR_23090;
}

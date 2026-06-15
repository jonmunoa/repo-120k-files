// fichero 14090 -- macros y constantes -- MODIFICADO
#define LIMITE_14090 14290
#define FACTOR_14090 2

int aplicar_limite14090(int valor) {
    if (valor > LIMITE_14090) return LIMITE_14090;
    return valor * FACTOR_14090;
}

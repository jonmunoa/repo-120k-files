// fichero 40938 -- macros y constantes -- MODIFICADO
#define LIMITE_40938 41138
#define FACTOR_40938 5

int aplicar_limite40938(int valor) {
    if (valor > LIMITE_40938) return LIMITE_40938;
    return valor * FACTOR_40938;
}

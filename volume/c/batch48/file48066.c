// fichero 48066 -- macros y constantes -- MODIFICADO
#define LIMITE_48066 48266
#define FACTOR_48066 3

int aplicar_limite48066(int valor) {
    if (valor > LIMITE_48066) return LIMITE_48066;
    return valor * FACTOR_48066;
}

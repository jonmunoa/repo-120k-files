// fichero 39066 -- macros y constantes -- MODIFICADO
#define LIMITE_39066 39266
#define FACTOR_39066 3

int aplicar_limite39066(int valor) {
    if (valor > LIMITE_39066) return LIMITE_39066;
    return valor * FACTOR_39066;
}

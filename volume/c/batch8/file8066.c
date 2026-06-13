// fichero 8066 -- macros y constantes
#define LIMITE_8066 8166
#define FACTOR_8066 2

int aplicar_limite8066(int valor) {
    if (valor > LIMITE_8066) return LIMITE_8066;
    return valor * FACTOR_8066;
}

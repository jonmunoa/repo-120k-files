// fichero 48158 -- macros y constantes
#define LIMITE_48158 48258
#define FACTOR_48158 4

int aplicar_limite48158(int valor) {
    if (valor > LIMITE_48158) return LIMITE_48158;
    return valor * FACTOR_48158;
}

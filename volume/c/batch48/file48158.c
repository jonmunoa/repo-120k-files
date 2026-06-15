// fichero 48158 -- macros y constantes -- MODIFICADO
#define LIMITE_48158 48358
#define FACTOR_48158 5

int aplicar_limite48158(int valor) {
    if (valor > LIMITE_48158) return LIMITE_48158;
    return valor * FACTOR_48158;
}

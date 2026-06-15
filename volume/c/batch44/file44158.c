// fichero 44158 -- macros y constantes -- MODIFICADO
#define LIMITE_44158 44358
#define FACTOR_44158 5

int aplicar_limite44158(int valor) {
    if (valor > LIMITE_44158) return LIMITE_44158;
    return valor * FACTOR_44158;
}

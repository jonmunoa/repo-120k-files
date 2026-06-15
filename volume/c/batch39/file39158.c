// fichero 39158 -- macros y constantes -- MODIFICADO
#define LIMITE_39158 39358
#define FACTOR_39158 5

int aplicar_limite39158(int valor) {
    if (valor > LIMITE_39158) return LIMITE_39158;
    return valor * FACTOR_39158;
}

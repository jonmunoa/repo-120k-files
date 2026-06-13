// fichero 39158 -- macros y constantes
#define LIMITE_39158 39258
#define FACTOR_39158 4

int aplicar_limite39158(int valor) {
    if (valor > LIMITE_39158) return LIMITE_39158;
    return valor * FACTOR_39158;
}

// fichero 52158 -- macros y constantes
#define LIMITE_52158 52258
#define FACTOR_52158 4

int aplicar_limite52158(int valor) {
    if (valor > LIMITE_52158) return LIMITE_52158;
    return valor * FACTOR_52158;
}

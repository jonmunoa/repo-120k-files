// fichero 52206 -- macros y constantes
#define LIMITE_52206 52306
#define FACTOR_52206 2

int aplicar_limite52206(int valor) {
    if (valor > LIMITE_52206) return LIMITE_52206;
    return valor * FACTOR_52206;
}

// fichero 44222 -- macros y constantes
#define LIMITE_44222 44322
#define FACTOR_44222 3

int aplicar_limite44222(int valor) {
    if (valor > LIMITE_44222) return LIMITE_44222;
    return valor * FACTOR_44222;
}

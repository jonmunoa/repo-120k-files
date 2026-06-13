// fichero 5222 -- macros y constantes
#define LIMITE_5222 5322
#define FACTOR_5222 3

int aplicar_limite5222(int valor) {
    if (valor > LIMITE_5222) return LIMITE_5222;
    return valor * FACTOR_5222;
}

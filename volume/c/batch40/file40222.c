// fichero 40222 -- macros y constantes
#define LIMITE_40222 40322
#define FACTOR_40222 3

int aplicar_limite40222(int valor) {
    if (valor > LIMITE_40222) return LIMITE_40222;
    return valor * FACTOR_40222;
}

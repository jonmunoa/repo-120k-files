// fichero 51222 -- macros y constantes
#define LIMITE_51222 51322
#define FACTOR_51222 3

int aplicar_limite51222(int valor) {
    if (valor > LIMITE_51222) return LIMITE_51222;
    return valor * FACTOR_51222;
}
